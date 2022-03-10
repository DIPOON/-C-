#include <stdio.h>

int main(int argc, char* argv[])
{
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;
	char szBuffer[4096] = { 0 };
	int nFileSize = 0;

	for (int i = 0; i < argc; i++)
	{
		printf("argv[%d] : %s\n", i, argv[i]);
	}
	fp1 = fopen(argv[1], "rb");
	if (fp1 == NULL)
	{
		printf("fp1 NULL");
		return 0;
	}
	fp2 = fopen(argv[2], "wb");
	if (fp2 == NULL)
	{
		printf("fp1 NULL");
		return 0;
	}
	fseek(fp1, 0, SEEK_END);
	nFileSize = ftell(fp1);
	fseek(fp1, 0, SEEK_SET);

	while (fgets(szBuffer, sizeof(szBuffer), fp1))
	{
		fprintf(fp2, "%s", szBuffer);
		printf("%f%% is done\n", (float) ftell(fp1) / nFileSize * 100);
	}

	fclose(fp1);
	fclose(fp2);
	return 0;
}