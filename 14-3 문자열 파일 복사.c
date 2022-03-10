void main()

{
    FILE *fp1 = NULL;
    FILE *fp2 = NULL;
    char szBuffer[128] = { 0 };
    fp1 = fopen("TestFile.txt", "r");
    if (fp1 == NULL)
        return;
    fp2 = fopen("DstFile.txt", "w");
    if (fp2 == NULL)
        return;
    while (fgets(szBuffer, sizeof(szBuffer), fp1))
    {
        fprintf(fp2, "%s", szBuffer);
    }
    fclose(fp1);
    fclose(fp2);
}