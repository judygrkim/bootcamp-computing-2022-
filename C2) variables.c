#include <stdio.h>

int main(void) {
    int intVar;
    printf("int size is %d\n", sizeof(intVar));     //4, 4x8 =32bit

    char charVar;
    printf("char size is %d\n", sizeof(charVar));   //1, 1x8 =8bit

    float floatVar;
    printf("float size is %d\n", sizeof(floatVar));

    double doubleVar;
    printf("double size is %d\n", sizeof(doubleVar));   //more accurate number

    _Bool boolVar;
    printf("bool size is %d\n", sizeof(boolVar));       //<stdbool.h>필요 없음


    short int intVarS;
    printf("short int size is %d\n", sizeof(intVarS));

    long int intVarL;
    printf("long int size is %d\n", sizeof(intVarL));

    long long int intVarLL;
    printf("long long int size is %d\n", sizeof(intVarLL));

    return 0;
} 