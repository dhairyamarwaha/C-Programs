#include <stdio.h>

int greatestNumber(int array[], int elementCount);

int main(){
    int numberOfElements;

    printf("How many numbers do you wish to enter : ");
    scanf("%d", &numberOfElements);

    int array[numberOfElements];

    for(int i = 0; i < numberOfElements; i++){
        printf("Enter the %d element : ", (i + 1));
        scanf("%d", &array[i]);
    }

    int greatestElement = greatestNumber(array, numberOfElements);
    printf("The greatest number among the entered numbers is : %d", greatestElement);
}

int greatestNumber(int array[], int elementCount)
{
    int temp;

    for(int i = 0; i < elementCount - 1; i++){
        for(int j = 0; j < elementCount - 1 - i; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
        }
        }
    }

    return array[elementCount - 1];
}
