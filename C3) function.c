#include <stdio.h>

//for statement

//int main(void) {
//    for (int x=0; x<10; x++) {
//        printf("%d", x);
//    }
//}


//functions in C - grammar 

int Factorial(int n);

int main(void) {
    int number;
    int answer;
    printf("Input a number: ");
    scanf("%d", &number);
    answer = Factorial(number);
    printf("The factorial of %d is %d\n", number, answer);
}

int Factorial(int n) {
    int result = 1;
    for (int i=1; i<=n; i++){
        result *= i;
    }
    return result;
}