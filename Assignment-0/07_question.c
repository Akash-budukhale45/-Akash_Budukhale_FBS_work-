// Write a C program to convert given minutes into hours and remaining minutes.


#include<stdio.h>
int main(){

    int min,hour,remain;

    printf(" enter hour for calculate time \n");
    scanf("%d",&min);

    hour = min/60;
    remain = min%60;

    printf(" the minute you enter is %d then its convert into hour is %d and remaining minute is %d",min,hour,remain);

    return 0;
}