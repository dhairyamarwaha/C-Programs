#include<stdio.h>
int main(){
    int array[] = {1,2,3,4,5};
    int arraySize = sizeof(array)/sizeof(array[0]);
    int mid;
    int element;
   

    printf("Enter the element you wish to find in the array : ");
    scanf("%d", &element);

    int left = 0;
    int right = arraySize - 1;
    while(left <= right){
        mid = (left + right)/2;
        
        if(element == array[mid]){
            printf("The element %d has been found at index : %d", element, mid);
            break;
        } else if(element > array[mid]){
            left = mid + 1;
        } else{
            right = mid - 1;
        }
    }

 
    

}