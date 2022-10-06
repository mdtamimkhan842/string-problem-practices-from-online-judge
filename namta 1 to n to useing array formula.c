//answer wrong, i will trying another time for right answer in this problem, please Allah help me, book page no-160
#include <stdio.h>
#include <conio.h>
int main ()
{
    int namta[10][10];
    int i, j, sum=0, k, average, sum2=0;


    for (i=1; i<=10; i++)
    {
        for (j=1; j<=10; j++)
        {

            printf("%d * %d = %d\n", i, j, (i*j));
            k = i*j;
            if (k%2 == 0)
                sum = sum + k;
            else
                sum2 = sum2 + k;
            sum2 = sum2 + k;

        }


        printf("\n");
    }
    average = sum / 100;
    printf("%0.2f", average);
 printf("%d", sum);
        printf("%d", sum2);
    getch();
    return 0;
}
