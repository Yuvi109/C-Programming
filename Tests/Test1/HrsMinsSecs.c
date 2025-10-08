#include <stdio.h>
int main()
{
    int hr= 10 , min = 34 , sec=20;
    hr=hr*60*60;
    min=min*60;
    int total_sec=hr+min+sec;
    printf("%d",total_sec);
}