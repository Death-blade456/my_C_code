#include <stdio.h>
int main() 
{
FILE *pF = fopen("myfile.txt", "w");
fprintf(pF, "Spongebob Squarepants");
fclose(pF);
return 0;
}