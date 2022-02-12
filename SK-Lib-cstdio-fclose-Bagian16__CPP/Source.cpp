#pragma warning(disable:4996)

#include <cstdio>
#include <conio.h>

/*
    Source by AlphaCodingSkills
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    FILE* pFile = fopen("test.txt", "r");

    int c = getc(pFile);

    while (c != EOF) {
        putchar(c);
        c = getc(pFile);
    }

    //close the file
    fclose(pFile);

    _getch();
    return 0;
}

