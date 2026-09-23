// Write a C program to input marks of five subjects, find the total marks, and calculate the percentage


#include<stdio.h>

int main(){
    int maths= 45;
    int science = 51;
    int physics = 60;
    int biology = 65;
    int marathi = 70;
    int sum_ofallsub;
    float percentage;

    sum_ofallsub = maths + science + physics + biology + marathi;
    
    // i use this formula to solve this question  percentage = (total mark obtain * 100)/total mark

    percentage = (sum_ofallsub*100)/500;

    printf("the total mark obtain is %d and percentage is %.2f",sum_ofallsub,percentage);

    return 0;
}

