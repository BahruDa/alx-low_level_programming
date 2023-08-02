#!/bin/bash
<<<<<<< HEAD
gcc -c ./*.c
ar -rc liball.a ./*.o
=======

gcc -Wall -pedantic -Werror -Wextra -c *.c

ar -rc liball.a *.o

ranlib liball.a
>>>>>>> d7a5346a3776e683ef8e65865234c0e1688f4020
