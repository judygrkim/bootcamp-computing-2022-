//fiven a file F as input, count the number of characters and words in the file
//Total characters, Total words 

#include <stdio.h>

int main(void) {
    FILE *infile;
    char str[70];
    int TotalCharacters = 0, TotalWords = 0;
    char ch;

    infile = fopen("5) IO input.txt", "r");
    
    while ( (ch = fgetc(infile)) != EOF) {              //EOF = end of file
        TotalCharacters++;

        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0') {
            TotalWords++;
        }
    }   
    if (TotalCharacters > 0) TotalWords++;


    printf("Total number of characters is %d\n", TotalCharacters);
    printf("Total number of words is %d\n", TotalWords);

    return 0;

}