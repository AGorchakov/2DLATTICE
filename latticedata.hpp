/* 
 * File:   2dlatticedata.hpp
 * Author: medved
 *
 * Created on February 12, 2016, 3:49 PM
 */

#ifndef LATTICEDATA_HPP
#define LATTICEDATA_HPP

#include <vector>
#include "latlimits.hpp"
#include "atoms.hpp"

namespace lattice {

    /**
     * Data for 2-dimensional lattice
     */
    struct LatticeData {
        /**
         * Constructor 
         * @param numLayers number of layers
         */
        LatticeData(int numLayers) : mNumLayers(numLayers) {
            mLayersAtoms.resize(numLayers);
        }
        
        /**
         * Number of modeling layers
         */
        int mNumLayers;

        /**
         * The maximal radius of atomic interaction, beyond this radius the energy is zero
         */
        double mRadius;

        /**
         * Layer's atoms, each atom is identified by an integral number
         */
        std::vector<AtomTypes> mLayersAtoms;

        /**
         * Indices in Lattice data array
         * Lattice parameters are stored as follows : h0 d0 s0 h1 d1 s1 .... hn - 1 dn - 1 sn - 1
         */
        enum ParamInd : int {
            // Layer's height
            Height = 0,
            // The dispacement of the first atom in a layer
            Displ = 1,
            // Stride within layer
            Stride = 2,
            // The size of one record
            RecSize = 3
        };

    };

}
#endif /* LATTICEDATA_HPP */

