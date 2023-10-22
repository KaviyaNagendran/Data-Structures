#include<stdio.h>
int main()
{
    int x,ans=0,pv=1;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
    ans=0;pv=1;
    int num=i;
    while(num!=0)
    {
    if(num%2==0)
    {
        ans=4*pv+ans;
        num-=1;
    }
    else
    {
        ans=3*pv+ans;
    }
    pv*=10;
    num/=2;
    }
    printf("%d ",ans);
    }
 return 0;
}

/*
Input :
5
Output :
3 4 33 34 43 
*/
