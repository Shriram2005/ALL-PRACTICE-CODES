#include <stdio.h>
int main()
{
    FILE *fptr; //////fprintf   print directly in file
    int a = 12345;
    fptr = fopen("TEST2.txt", "w"); // read(r)      write(w)     append(a)

    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'P');
    fprintf(fptr, "%c", 'P');
    fprintf(fptr, "%c", 'L');
    fprintf(fptr, "%c\n", 'E');

    fprintf(fptr, "%s", "hello guys\n");

    fprintf(fptr, "%d\n%d\n", 32234, a); ////

    fputc('M', fptr);
    fputc('A', fptr);
    fputc('N', fptr);                       ///using fputc
    fputc('G', fptr);
    fputc('O', fptr);

    fclose(fptr);
    return 0;
}