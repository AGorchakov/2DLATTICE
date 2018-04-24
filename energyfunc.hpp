/* 
 * File:   energyfunc.hpp
 * Author: medved
 *
 * Created on February 29, 2016, 5:23 PM
 */

#ifndef ENERGYFUNC_HPP
#define ENERGYFUNC_HPP

#include <memory>
#include <functor.hpp>
#include "energy.hpp"

namespace lattice {

    class EnergyFunc : public COMPI::Functor <double> {
    public:

        EnergyFunc(std::shared_ptr<Energy> energy) : mEnergy(energy) {
        }

        double func(const double* x) const {
            return mEnergy->energy(x);
        }


    private:

        std::shared_ptr<Energy> mEnergy;
    };


}

#endif /* ENERGYFUNC_HPP */

