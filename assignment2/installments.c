#include <stdio.h>
#include <math.h>
 
int main() 
{
    float principal, rate, time, per_month;
 
    printf("Enter principal: ");
    scanf("%f",&principal);
 
    printf("Enter rate: ");
    scanf("%f",&rate);
 
    printf("Enter time in year: ");
    scanf("%f",&time);
 
    rate=rate/(12*100); 
    time=time*12; 
 
 
    per_month= (principal*rate*pow(1+rate,time))/(pow(1+rate,time)-1);
 
    printf("Monthly Installments are = %.4f\n",per_month);
     
    return 0;
}