#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,e=0;
    scanf("%d %d",&a,&b);
    for (int i = 0; i <=10; i++)
    {
        a*=3;
        b*=2;
        e++;
        if (a>b)
        {
            break;
        }
        
    }
    printf("%d",e);
    return 0;
}
