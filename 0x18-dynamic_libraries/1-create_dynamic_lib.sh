#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -FPIC *.c -shared -o liball.so
