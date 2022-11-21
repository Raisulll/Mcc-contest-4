#include<stdio.h>
int main(int argc, char const *argv[])
{
    int T,N,A,s=0;
    scanf("%d",&T);
    while (T--)
    {
        scanf("%d",&N);
        for (int i = 0; i < N; i++)
        {
            scanf("%d",&A);
            if (A>=10 && A<=60)
            {
                s++;
            }
            
        }
        printf("%d\n",s);
        s=0;
    }
    
    return 0;
}
