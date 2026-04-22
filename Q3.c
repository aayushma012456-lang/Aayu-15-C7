#include <stdio.h>
float addition();
float subtraction();
float multiply();
float division();

int main(){

    printf("The sum of given  number is %f\n", addition());
    printf("The sub of given  number is %f\n", subtraction());
    printf("The product of given  number is %f\n",  multiply());
    printf("The division of given  number is %f",division() );
}
    float addition(){
        float a ,b,sum;
    printf("Enter value of a and b\n");
    scanf("%f %f", &a,&b);
    sum= a+b;
    return sum;
}
    
    float subtraction() {
    float a ,b,sub;
    printf("Enter value of a and b\n");
    scanf("%f %f", &a,&b);
    sub= a-b;   
    return sub;
}

    float multiply(){
    float a ,b,product;
    printf("Enter value of a and b\n");
    scanf("%f %f", &a,&b);
    product= a*b;
    return product;
}
    float division(){
    float a ,b,divide;
    printf("Enter value of a and b\n");
    scanf("%f %f", &a,&b);
    divide= a/b;
    return divide;
}



    
