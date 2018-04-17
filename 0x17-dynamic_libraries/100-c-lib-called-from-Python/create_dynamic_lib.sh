#!/bin/bash
gcc -Wall -fPIC -c *.c
gcc -shared -Wl,-soname,100-operations.so -o 100-operations.so *.o
