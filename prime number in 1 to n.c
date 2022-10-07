#include <stdio.h>
int main ()
{
    int arr[500];
    int i, j, n, c, k=0;

    scanf("%d", &n);

    if (n==0 || n==1)
        c++;

    for (i=2; i<=n; i++)
    {
        for (j=2; j<=i; j++)
        {
            if (i%j == 0) //

                c=2;
            if (c==1)
                printf("%d\n", i);
        }
    }


    return 0;
}
