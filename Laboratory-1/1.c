#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int convertStringToNumber(char str[256]) {
    int number = 0;
    for(int i = 0;i < strlen(str)-1;i++) {
        int digit = str[i] - '0' ;
        number = number*10+digit;
    }

    return number;
}

void sumNumbers(int *s, int n) {
    *s+=n;
}
int main() {
    int sum = 0;
    char *buffer = malloc(sizeof(char) * 255);
    FILE* filehandle;
    filehandle = fopen("/Users/bucataruflorin/Desktop/INTROP/untitled3/cmake-build-debug/input.txt", "r");
    if(filehandle==0) { printf("Nu am deschis fisierul");return 0;}

    while(fgets(buffer, 256, filehandle)) {
        sumNumbers(&sum,convertStringToNumber(buffer));
    }
    printf("%d", sum);

    return 0;
}

