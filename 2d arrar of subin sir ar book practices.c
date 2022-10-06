//Answer wrong because my taken input formula is not correct
#include <stdio.h>
int main ()
{
    int arr[500][500];
    int i, j, n,m, first_exam, second_exam, final_exam;
    double total_marks;

    scanf("%d", &n);//4//10 20 30 40
    scanf("%d", &m);//10//10 20 30 40 50 60 70 80 90 100


    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            scanf("%d", &arr[i][j]);//
        }
    }

    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            total_marks[i][j] = first_exam[i][j] / 4.0 + second_exam[i][j] / 4.0 + final_exam [i][j] / 2.0;

            printf("%0.2lf", total_marks[i][j]);
        }
    }

    return 0;
}
