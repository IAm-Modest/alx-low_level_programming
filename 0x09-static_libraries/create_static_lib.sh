#!/bin/bash
#creates the object file - (.o file)
gcc -Wall -pedantic -Werror -Wextra -c *.c
#Generates the static library
ar rcs liball.a *.o
