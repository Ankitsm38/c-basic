#include<stdio.h>
int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num%2==0)
    {printf("%d is even");}
    else
    {printf("%d is odd");}
    return 0;

}