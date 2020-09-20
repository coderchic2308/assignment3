#include "Header.h"

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(iCnt=2; iCnt<=iNo/2; iCnt++)
    {
        if((iNo%iCnt == 0) && (iCnt%2 == 0))
        {
            printf("%d\n", iCnt);
        }
    }
}