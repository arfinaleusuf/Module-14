#include<stdio.h>
int cheak(int num)
{
    if(num%2== 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return;
}
int main()
{
    int a;
    scanf("%d",&a);
    int res = cheak(a);
    return 0;
}