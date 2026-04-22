#include<stdio.h>
float addition(float,float);
float subtraction(float,float);
float multiply(float,float);
float division(float,float);

void main(){
    float a,b;
    printf("Enter value of a and b\n");
    scanf("%f %f", &a,&b);
   addition(a,b);
   subtraction(a,b);
   multiply(a,b);
   division(a,b);

}

float addition(float a,float b){
    printf("The sum of given  number is %f\n", a+b);
}

float subtraction(float a,float b){
    printf("The sub of given  number is %f\n", a-b);
}


float multiply(float a,float b){

    printf("The product of given  number is %f\n", a*b);
}


float division(float a, float b){

    printf("The division of given  number is %f", a/b);
}




