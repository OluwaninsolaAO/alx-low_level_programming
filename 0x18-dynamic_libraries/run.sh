#!/bin/bash
gcc ops.c -c -fPIC
gcc ops.o -shared -o 100-operations.so
