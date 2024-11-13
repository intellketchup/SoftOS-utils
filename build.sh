gcc -Wall -O2 -g -o build/ls src/ls.c 
gcc -Wall -O2 -g -o build/cp src/cp.c 

nasm -f elf64 src/link.asm -o build/link.o
ld -s -o src/link build/link.o
