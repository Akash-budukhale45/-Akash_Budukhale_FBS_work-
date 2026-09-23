// Write a C program to convert temperature from Celsius to Fahrenheit using the formula:
// // F = (C *9/5) + 32


#include<stdio.h>

int main(){
    float c = 30.0 , f;

     // // F = (C *9/5) + 32 use this formula to solve this 

    f = ((9.0/5.0)*c)+32;

    printf("the temprature %.3f degree celcius convert into ferhnhiet is %.3f",c,f);
    return 0;
}
