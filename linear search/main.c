#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void linear(int a,int nele,int sk)
{
    int arr[a];
    bool found= false;
    int position=-1;

    for (int i=0; i<nele; i++)
    {
        printf("Enter value ");
        scanf("%d",&arr[i]);
    }

    for (int i=0 i<nele; i++)
    {

        if (arr[i]==sk)
        {
            found=true;
            position=i;
        }
        else
        {
            printf("Value is not found");
        }
    }
}

int main()
{
    linear(5,5,10);
    return 0;
}
