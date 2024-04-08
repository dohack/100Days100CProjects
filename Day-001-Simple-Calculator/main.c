#include<stdio.h>
#include<stdint.h>
#include "myCalculator.h"


int main(void){

int32_t num1=15,num2=4;

long long int result;

printf("%d\n",funAdd(num1,num2));
printf("%d\n",funSub(num1,num2));
printf("%lld\n",funMult(num1,num2));
printf("%f\n",funDiv(num1,num2));
printf("%d\n",funMod(num1,num2));


    return 0;
}
