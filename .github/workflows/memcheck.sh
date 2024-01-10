#!/bin/bash

script
valgrind ./bin/assignment < input.txt
exec <&-