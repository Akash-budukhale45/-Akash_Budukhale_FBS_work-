// Write a program to check whether a person is eligible to vote (age ≥ 18).

#include<stdio.h>

int main(){
    int age = 21;
    if(age>=18){
        printf("the person is eligible for vote becuase his age is grater then 18");
    }else{
        printf("the person is not eligible for vote becuase his age is not grater then 18");
    }
    return 0;
}