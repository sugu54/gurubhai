#include <stdio.h>
void main()
{
    int a;
    printf("enter value");
    scanf("%d",&a);
    if(a>0)
    {
    printf("positive");
    }
    else if(a==0)
    {
    printf("zero");
    }
    else
    {
    printf("negative");
    }
getch();
}
