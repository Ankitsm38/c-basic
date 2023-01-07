#include<stdio.h>

int main() {

 float f;
printf("Enter the value of f in freinheit: ");
scanf("%f", &f);
printf("Celcuis value is : %f",(f - 32) * 5 / 9);
return 0;
}