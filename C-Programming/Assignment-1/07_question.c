// Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30% respectively.

#include<stdio.h>

int main(){
    int basic = 8000;
    int da,ta,hra,total_salary;

    if (basic<=5000){
         da = (basic/100)*10;
         ta = (basic/100)*20;
         hra = (basic/100)*25;

         total_salary = basic + da + ta + hra;
         printf("the total salary is %d\n",total_salary);
    }else{
         da = (basic/100)*15;
         ta = (basic/100)*25;
         hra = (basic/100)*30;
        total_salary = basic + da + ta + hra;
        printf("the total salary is %d\n",total_salary);
    }

    return 0;
}