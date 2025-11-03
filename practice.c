#include <stdio.h>
void cheak()
{
    int a;
    scanf("%d", &a);
    if (a % 2 == 0)
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
    cheak();
    return 0;
}