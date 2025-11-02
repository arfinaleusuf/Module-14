#include<stdio.h>

int sub(int num1, int num2)
{
    int ans = num1 - num2;
    return ans;
}
int sum(int num1, int num2)
{
    int ans = num1 + num2;
    return ans;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int val = sub(a,b);
    int val2 =sum(100,200);
    printf("%d %d",val,val2);
    return 0;
}