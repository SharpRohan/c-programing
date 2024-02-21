#include<stdio.h>
int main ()
{
int f,s;
printf("enter first number\n");
scanf("%d",&f);
printf("enter second number\n");
scanf("%d",&s);
if(f>s)
{
    printf("first number is gteater");
}
if(f<s)
{
    printf("second number is greater");
}
if(f==s)
{
printf("both are equal");
}
    return 0;
}