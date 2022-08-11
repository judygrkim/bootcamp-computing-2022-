#include <stdio.h>

int main(void) {
    FILE *infile;
    FILE *outfile;
    char str[50];

    infile = fopen("5) IO input.txt", "r");
    outfile = fopen("5) IO output.txt", "w");

    while (fscanf(infile, "%s", str) != EOF) {    //infile을 string만큼 읽어와서 str에 저장
        fprintf(outfile, "%s ", str);            //띄어쓰기 없으면 빈칸 없이 나열 
    } 

    fclose(infile);
    fclose(outfile);

    return 0;
} 
