#!/bin/bash
gcc -c -fPIC add.c mul.c div.c sub.c mod.c
gcc -shared -o 100-operations.so add.c mul.c div.c sub.c mod.c
