#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,count=0,i=0,r,s=0,p;
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        count++;
        n=n/10;
    }
    n=temp;
    for(i=0;i<count;i++){
        r=n%10;
        p=pow(r,count-i);
        s=s+p;
        n=n/10;
    }
    if(s==temp){
        printf("%d is dasium no.",s);
    }
    else{
        printf("%d is not dasium no.",temp);
    }
}