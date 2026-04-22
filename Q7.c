#include<stdio.h>
int fibo(int);
int n;
int fibo(int a){
    if(a==0){
        return 0;
    }
    else if(a==1){
        return 1;
    }
    else{
        return (fibo(a-1)+fibo(a-2));
    }

}
int main(){
    int f,i=0;
    printf("Enter value up to which fibonacci series should be determined\n");
    scanf("%d",&n);
    printf("The value of fibnacci series is \n");
    while(fibo(i)<=n){
        f=fibo(i);
        i++;
          printf(" %d\n",f);
    }
   
    return 0;
}