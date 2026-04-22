#include<stdio.h>
int sum(int);
int sum(int a){
    if(a==0){
        return 0;
    }
    else{
        return(a + sum(a-1));
    }
}
int main(){
    int a;
    printf("Enter the value upto sum of nth term\n");
    scanf("%d",&a);
    printf("Sum is %d",sum(a));
    return 0;

}