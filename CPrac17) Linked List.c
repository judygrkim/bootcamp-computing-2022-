//given two sorted linked lists, merged the two into one sorted linked list and return its head none
// input : list1 1->3->5->7
//         list2 2->4->6->8
// output: 1->2->3->4->5->6->7->8

#include <stdio.h>
#include <stdlib.h>


//node 정의
typedef struct Node {
    int val;
    struct Node* next;
} Node;


int main (void) {

    return 0;
}


Node* merge(Node* list1, Node* list2) {
    Node dummy = {0, NULL};                         //합칠 리스트를 만들기 위해 더미 하나 만듦 
    Node* newList = &dummy;

    while (list1 && list2) {
        if (list1 -> val < list2 -> val) {
            newList -> next = list1;
            list1 = list1->next;
        }
        else {
            newList -> next = list2;
            list2 = list2->next;
        }
        newList = newList -> next;
    }

    if (list1) {
        newList->next = list1;
    }

    else if (list2) {
        newList->next = list2;
    }
    return dummy.next;                              //제대로 된 첫번째 노드 

}
