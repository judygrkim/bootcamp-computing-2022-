//Functions in C - examples
//given two integers a, b recursively find its greatest common divisor (GCD)
//ex) input a = 10, b = 45 => output 5

#include <stdio.h>

int GCD(int A, int B);

int main(void) {
    int a;
    int b;
    int answer;
    printf("input a:");
    scanf("%d", &a);
    printf("input b:");
    scanf("%d", &b);
    answer = GCD(a, b);
    printf("The greatest common divisor(GDC) of %d and %d is %d", a, b, answer);
}


int GCD(int A, int B) {

    if (A<B) {                          
        return GCD(B, A);
    }
    else if (B==0) {                                   //base case
        return A;
    }
    else {                                             //recursive case
        return GCD(B, A%B);
    }
}   

