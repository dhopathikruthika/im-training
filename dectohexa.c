#include <stdio.h>
// function to convert decimal to hexadecimal
int main()
{
    // char array to store hexadecimal number
    char hexaDeciNum[50];
    int x = 0,decNum;
    printf("enter the decimalnumber: ");
    scanf("%d",&decNum);
    //int decToHex(decNum);
    while (decNum != 0)
    {
         hexaDeciNum[x] = (char)(*("0123456789ABCDEF"
                                  + ((decNum % 16) & (15))));
        decNum = (decNum / 16);
        ++x;
    }
    printf("0x"); //print hex symbol
    // printing hexadecimal number array in reverse order
    for (int y = x - 1; y >= 0; y--)
    {
        printf("%c", hexaDeciNum[y]);
    }
    return 0;
}

