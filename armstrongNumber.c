#include<stdio.h>
#include<math.h>

int main() {
    int rem, n, q, digitNum;
    float sum = 0.0;
    printf("Enter a number to check armstrong condition: ");
    scanf("%d", &n);
    q = n;
    while(q != 0){
        q = q/10;
        digitNum += 1;
    }
    q  = n;
    while(q != 0){
        rem = q % 10;
        sum += pow(rem, digitNum);
        q = q / 10;
    }
    if((int)sum == n){
        printf("%d is a armstrong numnber: ", n);
    } else {
        printf("%d is not a a armstrong number: ", n); 
    }
    return 0;
}