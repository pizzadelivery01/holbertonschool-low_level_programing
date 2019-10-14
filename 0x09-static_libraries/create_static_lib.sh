#!/bin/bash
gcc -Wall -Werror -W pedantic -c *.c
ar -rc liball.a *.o
