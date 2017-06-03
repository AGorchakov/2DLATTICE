#include <iostream>
#include "ppenergy.hpp"
#include "atoms.hpp"
#include "pairpotentials.hpp"

int main(int argc, char* argv[]) {

    // Number of layers in the model
    constexpr int n = 4;
    // Length of the modeling piece of material
    constexpr double length = 16;

    lattice::LatticeData data(n);

    /**
     * Setup lattice data
     */
    data.mRadius = 3;
    data.mLayersAtoms.assign(n, lattice::AtomTypes::CARBON);

    /**
     * Setup potential
     */
    double qcut = data.mRadius * data.mRadius;
    double d = 0.15;
    double qmin = (data.mRadius - d) * (data.mRadius - d);
    double qdelta = qcut - qmin;
    // Lennard Jones
    lattice::PotentialCutter pc(qcut, qdelta, lattice::ljpotent);

    /**
     * Setup energy
     */
    lattice::LatticeUtils lut(data);
    lattice::PairPotentialEnergy enrg(lut, pc, length);

    /**
     * Setup lattice parameters
     */
    double x[] = {1, 0, 1, 1, 0.5, 1, 1, 0, 1, 1, 0.5, 1};

    double v = enrg.energy(x);

    std::cout << "v = " << v << "\n";

    return 0;
}
