#include<stdio.h>
int main()
{
float p,c,m,e,h,avg;

printf("enter marks in physics\n");

scanf("%f",&p);

printf("enter marks in chemistry\n");

scanf("%f",&c);

printf("enter marks in math\n");

scanf("%f",&m);

printf("enter marks in english\n");

scanf("%f",&e);

printf("enter marks in hindi\n");

scanf("%f",&h);

avg=(p+c+m+e+h)/5;

printf("avg of result=%f",avg);

    return 0;
}