ls -la

script
valgrind ./bin/assignment < input.txt
exec <&-
