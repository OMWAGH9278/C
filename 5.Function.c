#include<stdio.h>

int Addition( int iValue1, int iValue2)
{
    int iOutput = 0;
    iOutput = iValue1 + iValue2;
    return iOutput;
}

int main()
{
    int iNo1 = 10;
    int iNo2 = 11;
    int iAns = 0;
    iAns = Addition( iNo1,iNo2);
    // iAns = Addition(10,11);
    printf("Addition is %d", iAns);

    return 0;

}
