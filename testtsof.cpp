#include <iostream>
#include "ppenergy.hpp"
#include "atoms.hpp"
#include "tsofenergy.hpp"
#include "carbontersoff.hpp"

int main(int argc, char* argv[]) {

    // Number of layers
    constexpr int n = 4;
    // Length of the material piece
    constexpr double length = 16;
    
    /**
     * Setup lattice data
     */
    lattice::LatticeData data(n);
    data.mRadius = 3;
    data.mLayersAtoms.assign(n, lattice::AtomTypes::CARBON);

    /**
     * Setup potential
     */
    lattice::TersoffParams tparam;
    lattice::fillCarbonParametersTersoffOriginal(tparam);
    lattice::TersoffUtils tutils(tparam);
    lattice::LatticeUtils lut(data);
    lattice::TersoffEnergy enrg(lut, tutils, length);

    /**
     * Setup lattice parameters
     */
    double x[] = {1.46, 0, 2.5, 0.73, 1.25, 2.5, 1.46, 1.25, 2.5, 0.73, 0, 2.5};

    double v = enrg.energy(x);

    std::cout << "v = " << v << "\n";

    for(auto i : enrg.getLBounds()) {
        std::cout << i << "\t";
    }
    std::cout << "\n";
    for(auto i : enrg.getUBounds()) {
        std::cout << i << "\t";
    }
    std::cout << "\n";
    return 0;
}
