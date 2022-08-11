// def selection_sort(L:list) -> None:
//      for i in range(len(L)):
//            smallest = i
//            for j in range(i+1, len(L)):
//                 if L[j] < L[smallest]:
//                      smallest = j
//             L[i], L[smallest] = L[smallest], L[i]

//Header: void selection_sort(int L[], int size)
//python to C
//C's array does not have len function
//C does not support one-line swap


#include <stdio.h>
#define SIZE 10

void selection_sort(int L[], int size);

int main (void) {
    int L[SIZE] = {9,-8,-1,6,23,4,3,11,85,0};

    for (int i=0; i < SIZE; i++) {
        printf("%d ", L[i]);
    }
    printf("\n");

    selection_sort(L, SIZE);

    for (int i=0; i < SIZE; i++) {
        printf("%d ", L[i]);
    }
    printf("\n");

    return 0;
}

void selection_sort(int L[], int size) {
    int smallest;
    int temp;

    for (int i=0; i < size; i++) {
        smallest = i;
        for (int j = i+1; j < size; j++) {
            if (L[j] < L[smallest]) {
                smallest = j;
            }
        }
        temp = L[i];              //when swapping, need at least 3 line
        L[i] = L[smallest];
        L[smallest] = temp;
    }
}