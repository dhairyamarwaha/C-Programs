#include <stdio.h>
#include <string.h>
void properCase (char text[]);
int main(){
    char stringArray[100];

    printf("Enter a string : ");
    scanf("%[^\n]", stringArray);

    properCase(stringArray);

    printf("The changed case is : %s",stringArray);

}

void properCase(char text[])
{
    int length = strlen(text);

    for(int i = 0; i < length; i++){
        if(text[i] >= 'A' && text[i] <= 'Z'){
            text[i] += 32;
        } else if(text[i] >= 'a' && text[i] <= 'z'){
            text[i] -= 32;
        }else{
            text[i] = text[i];
        }
    }


}
