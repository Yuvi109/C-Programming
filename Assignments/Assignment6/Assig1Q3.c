#include <stdio.h>
void upperlower()
{
    char ch = 'X';
    if(ch>='A' && ch<='Z')
    {
        printf("Charcter is uppercase");
    }
    else 
    {
        printf("Char is lowercase");
    }

}

void main()
{
    upperlower();
}
