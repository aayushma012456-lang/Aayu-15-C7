#include<stdio.h>
int fact(int);
int main(){
    int n;
    long long int f;
    printf("Enter number which factorial is to be determined\n");
    scanf("%d", &n);
    f=fact(n);
    printf("Factorial is %lld",f);
    


    return 0;
}
int fact(int a){
    if(a==0 || a==1){
        return 1;
    }
    else{
        return (a* fact(a-1));
    }
}