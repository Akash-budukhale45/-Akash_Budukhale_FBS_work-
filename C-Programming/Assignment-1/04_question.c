// Write a program to check whether a given character is a vowel or consonant


#include<stdio.h>

int main(){
    char character = 'E';
    if(character=='A'|| character =='E'||character =='I'||character=='O'|| character=='U'||character=='a'||character=='e'||character=='i'||character=='o'||character=='u'){
        printf("the charcter is a vowel");
    }else{
        printf("the charcter is a constant");
    }
    return 0;
}