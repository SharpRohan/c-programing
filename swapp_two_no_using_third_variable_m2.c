#include<stdio.h>
int main ()
{
int a=10,b=20,c;
printf("before swapping a=%d and b=%d\n",a,b);
c=a+b;
a=c-a;
b=c-b;
printf("after swapping a=%d and b=%d",a,b);
    return 0;
}