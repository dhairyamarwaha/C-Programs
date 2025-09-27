#include <stdio.h>
int main(){
    int limit;
    int i, j, num = 1;
    printf("Enter the limit for the floyd's triangle : ");
    scanf("%d", &limit);

    for(i = 0; i < limit; i++){
        for(j = 0; j <= i; j++){
            printf("%d\t", num);
            num++;
        }
        printf("\n");
    }


}