#include <stdio.h>
#include <string.h>
void properCase(char text[]);

int main(){
    char string[100];

    printf("Enter a string : ");
    scanf("%[^\n]", string);

    properCase(string);

    printf("The entered string in proper case is : %s", string);

}

void properCase(char text[]){
    int length = strlen(text);

    for(int i = 0; i < length; i++){
        if(text[0] >= 'a' && text[0] <= 'z'&& text[i + 1] >= 'A' && text[i + 1] <= 'Z'){
            text[0] -= 32;
            text[i + 1] += 32;
        } 
    }
}