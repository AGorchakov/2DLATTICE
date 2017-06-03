/* 
 * File:   atoms.hpp
 * Author: medved
 *
 * Definition of atom kinds
 * 
 * Created on February 13, 2016, 9:54 AM
 */

#ifndef ATOMS_HPP
#define ATOMS_HPP

namespace lattice {

    /**
     * Atom types
     */
    enum class AtomTypes : char {
        // Carbon
        CARBON
    };

    /**
     * Pair potential function type
     */
    using PairPotential = std::function <double (AtomTypes, AtomTypes, double) >;

}


#endif /* ATOMS_HPP */

