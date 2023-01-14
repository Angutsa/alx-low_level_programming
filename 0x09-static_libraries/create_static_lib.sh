#!/bin/bash
find . -name "*.c" | xargs gcc -c
find . -name "*.o" | xargs ar rc liball.a
