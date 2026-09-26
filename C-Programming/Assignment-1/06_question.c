// Write a program to check whether a given character is uppercase or lowercase

#include<stdio.h>

int main(){
    int character = 'a';
    if(character>='A'&&character<='Z'){
        printf("the character is Uppercase");
    }else{
        printf("the character is Lowercase");
    }
    return 0;
}