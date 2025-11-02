#include<stdio.h>

int sum(int num1, int num2)
{
    int ans = num1 + num2;
    return ans;
}
int main()
{
    int val = sum(10,5);
    int val2 =sum(100,200);
    printf("%d %d",val,val2);
    return 0;
}