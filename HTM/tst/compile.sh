#!/bin/sh

export LD_LIBRARY_PATH=../../LIB
g++ -o test test.cpp -L../../LIB -lHTM -I../inc 
