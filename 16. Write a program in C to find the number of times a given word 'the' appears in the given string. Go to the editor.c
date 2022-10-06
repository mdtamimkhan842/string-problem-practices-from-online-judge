#include <stdio.h>
#include <string.h>
int main ()
{
    char arr1[500], arr2[100];
    int i, j, length1,n, length2, c=0, k=0, temp;

    gets(arr1);//The string where the word the present more than once.
    gets(arr2);//the

    length1=strlen(arr1);//40
    length2=strlen(arr2);//3

    //int k, n, m, spece;


    for (i=0; i<length1; i++)
    {
        for (j=0; j<length2; j++)
        {
            if (arr2[j] == 't' && arr2[j] == 'h' && arr2[j] == 'e' || arr2[j] == 'T' && arr2[j] == 'H' && arr2[j] == 'E')
            {

            }
            c++;
        }
    }

    printf("the number of the index : %d\n", c);



    return 0;
}
