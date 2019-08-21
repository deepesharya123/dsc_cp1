#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    float a;
    printf("enter the no.");
    scanf("%d",&n);
    a=n/2;
    printf("%f",a);
    if((a*2)==n){
        printf("%d is even no.",n);
        
    }
    else{
        printf("%d is odd",n);
    }
}