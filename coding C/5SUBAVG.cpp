#include<stdio.h>
int main() {
    int a,b,c,d,e;
    printf("Enter 5 sub marks: ");
    scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);
    printf("Total Marks: %d\n",a+b+c+d+e);
    printf("AVG Marks: %d",(a+b+c+d+e)/5);
    return 0;

}