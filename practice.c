#include<stdio.h>
int cheak(int num)
{
    int a;
    if(num%2== 0)
    {
        a = 2;
    }
    else
    {
        a = 1;
    }
    return a;
}
int main()
{
    int a;
    scanf("%d",&a);
    int res = cheak(a);
    if(res==2)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}