#include <stdio.h>
int main(){
    int i, j;

    int array[] = {20,16,32,4,0};
    int arraySize = sizeof(array)/sizeof(array[0]);
    int temp;

    for(i = 0; i < arraySize - 1;i++){
        for(j = 0; j < arraySize - 1 - i; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("The sorted array is : ");
    for(i = 0; i < arraySize; i++){
        printf("%d\t",array[i]);
    }
}