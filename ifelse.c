#include<stdio.h>
int main()
{
    float p;
    printf("enter your persent\n");
    scanf("%f",&p);
    if(p<=100&&p>=60)
    {
        printf("first division\n");
    }
    if(p<60&&p>=45)
    {
        printf("second division\n");
    }
    if(p<45&&p>=33)
    {
        printf("third division\n");
    }
    if(p<33)
    {
        printf("fail ho gaya hai re tuu");
    }
    return 0;
}