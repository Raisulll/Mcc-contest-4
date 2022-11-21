#include <stdio.h>
int main(int argc, char const *argv[])
{
    long long int T, A, B, n1, n2, rem, gcd, lcm;
    scanf("%lld",&T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%lld%lld", &A, &B);
        n1 = A;
        n2 = B;
        while (n2 != 0)
        {
            rem = n1 % n2;
            n1 = n2;
            n2 = rem;
        }
        gcd = n1;
        lcm = (A * B) / gcd;
        printf("%lld %lld\n", gcd, lcm);
    }
    return 0;
}
