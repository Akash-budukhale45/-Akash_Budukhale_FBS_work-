// Write a program to check given 3 digit number is pallindrome or not.

#include<stdio.h>

int main(){
    int num = 314;

    int num1 = num%10;  
    int temp = num/10; 
    int num2 = temp%10; 
    int num3 = temp/10; 

    int reverse = num1*100 + num2*10 + num3*1;
    if(num == reverse ){
        printf("the number is a pallindrome");
    }else{
        printf("the number is not a pallindrome");
    }
    return 0;
}