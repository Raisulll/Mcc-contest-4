#include<stdio.h>
int main()
{
    int T,N,A,res=0,sum=0;
    scanf("%d",&T);
    while (T--)
    {
        scanf("%d",&N);
        for (int i=1; i <=N; i++)
        {
            scanf("%d",&A);
            if(A==0)
            {
                res++;
            }
            else if (A<0)
            {
                sum++;
            }
        }
        if(res!=0)
        {
            printf("0\n");
        }
        else if(sum%2==0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
        res=0;
        sum=0;
    }
    
    return 0;
}