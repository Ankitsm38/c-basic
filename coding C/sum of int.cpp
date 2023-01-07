#include<stdio.h>
int main()
{
int a, b, c;
printf("Enter the value of a,b,c: ");
scanf("%d %d %d", &a, &b, &c);
printf("The Determinant value is: %d", (b * b) - 4 * a * c);
return 0;
}