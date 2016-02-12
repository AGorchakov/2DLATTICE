/* 
 * File:   2dlatticedata.hpp
 * Author: medved
 *
 * Created on February 12, 2016, 3:49 PM
 */

#ifndef LATTICEDATA_HPP
#define	LATTICEDATA_HPP

#include "latlimits.hpp"

namespace lattice {

    /**
     * Data for 2-dimensional lattice
     */
    struct LatticeData {
        /**
         * Number of main layers
         */
        int mNumLayers;

        /**
         * The maximal radius of potential interaction
         */
        double mRadius;

        /**
         * The length of the material piece to model
         */
        double mLength;

        /**
         * The height of the material piece to model
         */
        double mHeight;

        /**
         * Layer's atoms, each atom is identified by an integral number
         */
        int mLayersAtoms[MAX_LAYERS];

    };

}
#endif	/* LATTICEDATA_HPP */

