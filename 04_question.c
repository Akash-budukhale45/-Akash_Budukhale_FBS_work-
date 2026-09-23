// // Write a C program to swap two numbers using a temporary third variable.

#include<stdio.h>

int main(){

    int a = 10;
    int b = 20;
    int temp ;

   printf("before changing the value  is : a = %d, b = %d\n", a, b);

    temp = a;
    printf("the value of temp is %d \n",temp);

    a = b;
    printf("the value of a now is %d\n");

    b = temp;
    printf("the value of b now is %d\n"); 

    printf("after changing the value is : a = %d, b = %d\n", a, b);

}







