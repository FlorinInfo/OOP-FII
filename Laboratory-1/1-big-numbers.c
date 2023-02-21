#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void addCarry(char str[1001],int *carry, int *position) {
  int digitBigNumber = str[1001 - *position - 1] - '0';
  int digitSumFinal = (digitBigNumber + *carry)%10;
    char c = digitSumFinal + '0';
    str[1001 - *position - 1] = c;
    *carry = (digitBigNumber + *carry)/10;
    *position++;
}

int main() {
    int carry = 0;
    char sumBigNumber[1002];
    //Init big number
    for(int i = 0; i < 1002;i++) sumBigNumber[i] = '0';
    char *buffer = malloc(sizeof(char) * 255);
    FILE* filehandle;
    filehandle = fopen("/Users/bucataruflorin/Desktop/INTROP/untitled3/cmake-build-debug/input.txt", "r");
    if(filehandle==0) { printf("Nu am deschis fisierul");return 0;}

    while(fgets(buffer, 256, filehandle)) {
        int nLen = strlen(buffer)-2;
        int k = 0;
        while(nLen-k>=0) {
            int digitBuffer = buffer[nLen-k] - '0';
            int digitSum = sumBigNumber[1001 - k - 1] - '0';
            int sumDigit = digitBuffer + digitSum;
            int digitSumFinal = (sumDigit + carry)%10;
            char c = digitSumFinal + '0';
            sumBigNumber[1001 - k - 1] = c;
            carry = (sumDigit+carry)/10;
            k++;
        }
        while(carry!=0){
            addCarry(sumBigNumber, &carry, &k);
        }
        sumBigNumber[1001] = NULL;
    }
    printf("%s",sumBigNumber);

    return 0;
}

