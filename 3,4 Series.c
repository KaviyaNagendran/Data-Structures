#include<stdio.h>

int main() {
    int Arr[1000];
    int Num,x=1;
    scanf("%d",&Num);
    Arr[0]=3;
    Arr[1]=4;
    for(int i=0;i<Num;i++)
    {
        Arr[++x]=(Arr[i]*10)+3;
        Arr[++x]=(Arr[i]*10)+4;
    }
    printf("%d",Arr[Num-1]);
}
