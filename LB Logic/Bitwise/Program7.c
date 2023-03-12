#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

int power(int base, int power)
{
    UINT ret = 1;
    for(int i = 1; i < power; ++i)
        ret = ret * base;
    
    return (ret);
}

bool checkBit(UINT value, int position)
{
    UINT result = 0;
    UINT iMask = power(2, position);

    result = value & iMask;

    if(result == iMask)
        return (true);
    else
        return (false);
}

int main(void)
{
    UINT value = 0;
    int position = 0;

    printf("Enter number :");
    scanf("%u", &value);

    printf("Enter position of bit :");
    scanf("%d", &position);

    if(checkBit(value, position) == true)
        printf("In number %d, %uth bit is ON", value, position);
    else
        printf("In number %d, %uth bit is OFF", value, position);

    return (0);
}