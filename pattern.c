#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    for (int i = 0; i <=n; i++)
    {
        printf("*");
        for (int j = 1; i <=n; i++)
        {
            printf("\n");
        }
       
    }
    
    return 0;
}
