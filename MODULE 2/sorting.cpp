#include<stdio.h>
int main() {
    int numbers[] = {10,40,20,60,30,50};
    int i, j, temp, arr_size;
    arr_size = sizeof(numbers)/
    sizeof(numbers[0]);
    for(i = 0; i<arr_size; i++){
        for(j = i+1; j<arr_size; j++){
            if(numbers[j]>numbers[i]){
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    for(i = 0; i<arr_size; i++){
        printf("%d",numbers[i]);
    }
    return 0;

    }
