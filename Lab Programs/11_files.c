// Write a C program to copy a text file to another, read both the input file name and target file name.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fptr1, *fptr2;
    char filename[100], c;
    printf("Enter the filename to open for reading\n");
    scanf("%s", filename);
    fptr1 = fopen(filename, "r");
    if (fptr1 == NULL) {
        printf("Cannot open file %s, it does not exist\n", filename);
        exit (1);
    }
    printf("Enter the filename to open for writing\n");
    scanf("%s", filename);
    fptr2 = fopen(filename, "w");
    c = getc(fptr1);
    while (c != EOF) {
        putc(c, fptr2);
        c = getc(fptr1);
    }
    printf("\nContents copied to %s", filename);
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}