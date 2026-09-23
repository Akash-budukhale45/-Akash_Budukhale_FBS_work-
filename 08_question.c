// Write a C program to input the length and width of a rectangle and find its perimeter

#include<stdio.h>

int main(){
    int length = 10;
    int width = 20;
    int perimeter;

    printf("the length is : %d \nthe width is  : %d \n",length,width);

    // formula perimeter = 2 * (length * width) 

    perimeter = 2*(length*width);

    printf("the perimeter of rectangle is %d\n",perimeter);

    return 0;
}

