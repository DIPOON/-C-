#include <stdio.h>
#include <string.h>
#include <math.h>


int StrEqual(const char* pString1, const char* pString2)
{
    int i = 0;

    // 길이가 다르면 다른 문자열입니다.
    if (strlen(pString1) == strlen(pString2))
    {
        while (*(pString1 + i) != '\n')
        {
        // 아스키 코드는 일부만 알파벳이다. 예를 들어 0~ 63 은 알파벳이 아니니 32만큼 차이나는 것이 같다고 보기 어렵다.
        // 알파벳 대소문자만 같다고 어떻게하지 --> tolower 함수가 도움이 될 듯
        if (*(pString1 + i) == *(pString2 + i) || abs((int)*(pString1 + i) - (int)*(pString2 + i)) == 32)
            i++;
        else
            return 1;
        return 0;
        }
    }
    return 1;
}