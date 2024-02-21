#include<stdio.h>
int main()
{
    int no;
    printf("Enter any number\n");
    scanf("%d",&no);
    if(no>0)
    {
        printf("positive");
    }
    if(no<0)
    {
        printf("negative");
    }
    if(no==0)
    {
        printf("zero");
    }
    return 0;
}