#include<stdio.h>
void addition();
void subtraction();
void multiply();
void division();

void main(){
    addition();
    subtraction();
    multiply();
    division();

}

void addition(){
    int a ,b,sum;
    printf("Enter value of a and b\n");
    scanf("%d %d", &a,&b);
    sum= a+b;
    printf("The sum of given  number is %d\n", sum);
}

void subtraction(){
    int a ,b,sub;
    printf("Enter value of a and b\n");
    scanf("%d %d", &a,&b);
    sub= a-b;
    printf("The sub of given  number is %d\n", sub);
}


void multiply(){
    int a ,b,product;
    printf("Enter value of a and b\n");
    scanf("%d %d", &a,&b);
    product= a*b;
    printf("The product of given  number is %d\n", product);
}


void division(){
    float a ,b,division;
    printf("Enter value of a and b\n");
    scanf("%f %f", &a,&b);
    division= a/b;
    printf("The division of given  number is %f", division);
}




