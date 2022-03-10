#include <stdio.h>


void main()
{
    FILE *fp = NULL;
    char szBuffer[128] = { 0 };
    fp = fopen("TestFile.txt", "a");
    while(fgets(szBuffer, sizeof(szBuffer), stdin))
    {
        fprintf(fp, "%s", szBuffer);
    }
    fclose(fp);
}