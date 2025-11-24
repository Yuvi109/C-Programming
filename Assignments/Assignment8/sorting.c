#include <stdio.h>
int main()
{
    int sort[5];
    int sorted[5];
    for (int i =0;i<5;i++)
    {
        scanf("%d",&sort[i]);
    }
    ascending(sort);
    for(int i=0;i<5;i++)
    printf("%d",sort[i])

}
int ascending(int sort[])
{
    for(int i=0;i<5;i++)
    {
       if(sort[i]>sort[i+1]) 
       sorted[i]=sort[i];
    }
    
}