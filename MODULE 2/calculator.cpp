#include<stdio.h>
int main() {
    float num1,num2;
    char op;
    printf("Enter operator(+,-,/,*) : ");
    scanf("%c", &op);
    printf("Enter num1 and num2: ");
    scanf("%f %f", &num1, &num2);
    
    switch (op)
    {
    case '+':
        printf("%f + %f =%f",num1, num2, num1 + num2);
        break;
    case '-':
        printf("%f - %f = %f",num1, num2, num1 - num2);
        break;
    case '*':
        printf("%f * %f = %f",num1, num2, num1 * num2);
        break;
    case '/':
        printf("%f / %f = %f",num1, num2, num1 / num2);
        break;                                                                         
    
    default:
        printf("ERROR!!!! WRONG OPERATOR");
        break;
    }
    return 0;
}