#include<stdio.h>
float addition(float,float);
float subtraction(float,float);
float multiply(float,float);
float division(float,float);

int main(){
    float a,b,sum,sub,product,divi;
    printf("Enter value of a and b\n");
    scanf("%f %f", &a,&b);
   addition(a,b);
   printf("The sum of given  number is %f\n", addition(a,b));

   subtraction(a,b);
   printf("The sub of given  number is %f\n", subtraction(a,b));

   multiply(a,b);
   printf("The product of given  number is %f\n",  multiply(a,b));

   division(a,b);
   printf("The division of given  number is %f",division(a,b) );
}

float addition(float a,float b){
    float sum;
    sum=a+b;
    return sum;
}

float subtraction(float a,float b){
    float sub;
    sub=a-b;
   return sub;
}


float multiply(float a,float b){
    float product = a*b;
    return product;
}


float division(float a, float b){
    float divide;
    divide=a/b;
   return divide;
}




