#include <stdio.h>

int addNums(int a, int b) {
    int sum = a + b;
    return sum;
}

int main(void) {
    int num1 = 2;
    int num2 = 5;

int sum = addNums(num1,num2);

    printf("The sum of your numbers are: %d",sum);
    
}