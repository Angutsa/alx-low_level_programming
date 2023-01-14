#!/bin/bash
find . -name "*.c" | xargs gcc -c | find . -name "*.o" | sort | xargs ar rc liball.a
