#include<stdio.h>
int max(int A[],int n)
{
    int m=A[0];
    for(int i=0;i<n;i++)
    {
        if(m<A[i])
        {
            m=A[i];
        }
    }
    return m;
}
int Binary(int x)
{
    int A[20];
    int i=0;
    while(x!=0)
    {
        A[i]=x%2;
        i++;
        x/=2;
    }
    int c=0;
    for(int j=0;j<i;j++)
    {
        if(A[j]==1)
            c++;
    }
    return c;
}
int main() {
    int num;
    scanf("%d",&num);
    int A[num],Ans[num];
    for(int i=0;i<num;i++)
        scanf("%d",&A[i]);
    for(int i=0;i<num;i++)
    {
        int bin=Binary(A[i]);
        Ans[i]=bin;
    }
    int n=0;
    int m=max(Ans,num);
    for(int j=0;j<num;j++)
    {
        if(Ans[j]==m)
        {
            if(n<A[j])
                n=A[j];
        }
    }
    printf("%d",n);
}
