//Given an array arr, reverse it using pointers
//ex) input: 3,1,4,1,5,9,2
//    output: 2,9,5,1,4,1,3


#include <stdio.h>

void reverse(int array[], int size);
void swap(int *a, int *b);

int main (void) {
    int arr[7] = {3,1,4,1,5,9,2};
    int size = 7;

    for (int i=0; i<7; i++) {          //print before change anything
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverse(arr, size);

    for (int i=0; i<7; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}


void reverse(int array[], int size) {
    int *p1 = array;
    int *p2 = array + size -1;
    while (p1 < p2) {
        swap(p1, p2);
        p1++;
        p2--;
    }
}

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}