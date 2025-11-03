#include <stdio.h>
int cheak()
{
    int a;
    scanf("%d", &a);
    if (a % 2 == 0)
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
    int res = cheak();
    if (res == 2)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}