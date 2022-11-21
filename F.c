#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,x,s=0;
    scanf("%d%d",&n,&x);
    for (int i = 1; i <=n; i++)
    {
        if (x%i==0)
        {
            if((x/i)<=n)
            {
                s++;
            }
        }
    }
    printf("%d",s);
    return 0;
}
