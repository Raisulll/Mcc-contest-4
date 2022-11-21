#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,a;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        scanf("%d",&a);
        if(a==1)
        {
            break;
        }
    }
    if (a==1)
    {
        printf("HARD");
    }
    else printf("EASY");

    return 0;
}
