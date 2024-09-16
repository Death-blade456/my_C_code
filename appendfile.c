#include <stdio.h>
int main() 
{
FILE *pF = fopen("myfile.txt", "a");
 fprintf(pF, "\nthis is my last line ");
fclose(pF);
return 0;
}