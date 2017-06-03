This project is aimed at computing the energy of 2D-crystall lattice. The energy is computed using so-called force field.
At the moment Lennard-Jones, Morse and Tersoff potentials are supported. 

The problem code is developed by Mikhail Posypkin (mposypkin@gmail.com) while working in Dorodnicyn Computing Centre, Federal Research Center “Computer Science and Control” of Russian Academy of Sciences. 
The problem idea was suggested by Sergey Lurie. More details can be found in the following papers:

1. Evtushenko, Y., Lurie, S., & Posypkin, M. (2016, October). New optimization problems arising in modelling of 2D-crystal lattices. In Y. D. Sergeyev, D. E. Kvasov, F. Dell’Accio, & M. S. Mukhametzhanov (Eds.), AIP Conference Proceedings (Vol. 1776, No. 1, p. 060007). AIP Publishing.
2. Evtushenko, Y. G., Lurie, S. A., Posypkin, M. A., & Solyaev, Y. O. (2016). Application of optimization methods for finding equilibrium states of two-dimensional crystals. Computational Mathematics and Mathematical Physics, 56(12), 2001-2010.

We kindly ask you to cite these papers if you use this code.


Building the project
====================
After unpacking the archive do:

    make dep

then

    make


Change log
==========

2016-05-01 Initial version supporting Morse, Lennard-Jones and Tersoff potentials and homogeneous lattice where all atoms have
the same type.

2017-06-03 Code refactoring performed, constants replaced with enumerations and some more small changes made.