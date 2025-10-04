#include <stdio.h>
#include <math.h>

int reverseNumber(int number);
int disariumCalculation(int number);

int main(){
    int number;
  

    printf("Enter a number : ");
    scanf("%d", &number);

    int ultaNumber = reverseNumber(number);

    int sumPowerPosition = disariumCalculation(ultaNumber);

    if(number == sumPowerPosition){
        printf("%d is a disarum number", number);
    } else{
        printf("%d is not a disarium number", number);
    }

}

int reverseNumber(int number)
{
    int revNum = 0;

    while(number != 0){
        int digits = number % 10;
        revNum = revNum * 10 + digits;
        number /= 10;
    }

    return revNum;
}

int disariumCalculation(int number)
{
    int sum = 0;
    int i = 1;

     while(number != 0){
        int digits = number % 10;
        sum = sum + pow((int)(digits), (int)(i));
        number /= 10;
        i++;
    }

    return sum;
}
