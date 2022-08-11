 #include <stdio.h>

 typedef struct nodeType LinkedNode; 
 struct nodeType {
    int val;
    LinkedNode *next;                                           //다음 걸 가르킬 수 있게 함
 };


 LinkedNode *createNode(int x) {
    LinkedNode *newNode;
    newNode = (LinkedNode *) malloc(sizeof(LinkedNode));        //링크드노드 크기의 메모리공간을 포인트 
    newNode -> val = x;
    newNode -> next = NULL;                                     //아직 가르키고 있는 것 없어서 NULL
    return newNode;
 }


 typedef struct listType SLList;
 struct listType {
    LinkedNode *first;
    int size;
 };

int getFirst(SLList *LL);
void addFirst(SLList *LL, int x);
int getSize(SLList *LL);
void printSLList(SLList *LL);

LinkedNode *searchNode(SLList *LL, int x);              //x를 찾고
void deleteNode(SLList *LL, int x);                     //x를 지우기, list 사이즈 줄이기





int main (void) {
    SLList myLL = {NULL, 0};
    addFirst(&myLL, 10);
    printSLList(&myLL);

    addFirst(&myLL, 20);
    printSLList(&myLL);

    addFirst(&myLL, 30);
    printSLList(&myLL);

    deleteNode(&myLL, 20);
    printSLList(&myLL);

    deleteNode(&myLL, 30);
    printSLList(&myLL);


    printf("%d\n", getFirst(&myLL));
    printf("%d\n", getSize(&myLL));
    printSLList(&myLL);
 }



//Function def 

int getFirst(SLList *LL) {
    if (LL -> first != NULL) {
        return LL -> first -> val; 
    }
}


void addFirst(SLList *LL, int x) {
    LinkedNode *newFirst = createNode(x);
    newFirst -> next = LL -> first;
    LL->first = newFirst;
    LL->size++;
}


int getSize(SLList *LL) {
    return LL->size;
}


void printSLList(SLList *LL) {
    LinkedNode *curr = LL -> first;
    printf("size: %d, firstVal: %d, allVals: ", getSize(LL), getFirst(LL));
    while (curr != NULL) {
        printf("%d->", curr->val);
        curr = curr -> next;
    }
    printf("END\n");
}



LinkedNode *searchNode(SLList *LL, int x) {
    LinkedNode *curr = LL -> first;

    while (curr != NULL) {
        if (curr -> val == x)
            return curr;
        curr = curr -> next;
    }
    return NULL;
}


void deleteNode(SLList *LL, int x) {
    LinkedNode *curr = LL -> first;
    LinkedNode *prev = NULL;

    while (curr != NULL) {
        if (curr -> val == x) {
            if (curr == LL -> first) {                              //다음 값에다 연결
                LL -> first = LL -> first->next;
            }
            else {
                prev -> next = curr -> next;                        //한 칸 건너뛰기
            }
            free(curr);                                             //curr 노드를 삭제
            LL->size--;                                             //size 하나 감소
            return;
        }
        else {                                                      //x 라는 value를 아직 못 찾으면 
            prev = curr;                                            //한 칸씩 계속 밀기 
            curr = curr->next;
    }
    }
}



