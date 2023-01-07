#include<stdio.h>
int main() {
    float side;
    printf("Enter the side of cube: ");
    scanf("%f",&side);
    printf("The volume of the cube is: %f", side*side*side);
    return 0;
}