//Program to Implement Tower of Hanoi Problem in C language
#include <stdio.h>

int towerOfHanoi(int n, char source, char destination, char auxiliary){
    if(n == 1){
        printf("Move disk 1 from source %c to destination %c \n", source, destination);
        return 0;
    }

    towerOfHanoi(n-1, source, auxiliary, destination);
    printf("Move disk %d from source %c to destination %c \n", n, source, destination);
    towerOfHanoi(n-1, auxiliary, destination, source);
}

int main(){
    int n = 4;
    char a = 'A', b = 'B', c = 'C';

    towerOfHanoi(n, a, c, b);
}