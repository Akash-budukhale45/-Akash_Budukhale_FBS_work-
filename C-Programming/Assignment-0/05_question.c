// Write a C program to input five numbers and find their average.

#include<stdio.h>

int main(){
    int a =21 ,b=22 ,c=23 ,d=24 ,e=25 ,sum , average;

    sum = a+b+c+d+e;
    printf("the sum of 5 number is %d\n",sum);
  
    // i use this formula to solve this question average= sum of all number / total number of value 


    average = sum/5;

    printf("the average of 5 number is :%d\n",average);
    return 0;
}
