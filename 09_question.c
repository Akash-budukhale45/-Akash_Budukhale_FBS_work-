// Write a C program to input the base and height of a triangle and calculate its area.

#include<stdio.h>

int main(){
    int base = 20;
    int height = 10;
    float areaof_triangle;

    printf("the base of triangle is  : %d\n",base);
    printf("the height of triangle is :%d\n",height);

    // i use this formula to solve this question area = 1/2 * base * height

    areaof_triangle = ((1.0/2.0)*base)*height;

    printf("the area of triangle is :%.3f\n",areaof_triangle);
    return 0;
}




