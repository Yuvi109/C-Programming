// Calculate elctricity bill - For 1-50 units - 30rs/unit , For 51-150units -40 rs/units and for 151 above-50rs/unit
#include <stdio.h>
int main()
{
    int units =200,bill;
    if(units>1&& units<=50)
    {
        bill=units*30;
        printf("Electricity bill is =""%d rs",bill);
    }
    else if(units>50 && units<=150)
    { 
        bill =units*40;
        printf("Electricity bill is =""%d rs",bill);
    }
    else if(units>151)
    {
        bill = units*50;
        printf("Electricity bill is =""%d rs",bill);
    }
    
}