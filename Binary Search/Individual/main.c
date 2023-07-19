#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int a[]={2, 8, 9, 11, 15, 45, 58, 78, 99};
    int size =9;
    int value = 2;

    printf("Position is %d",binarysearch(a,size,value));
    return 0;
}

int binarysearch (int arr[], int size, int value)
{

    bool found=false;
    int position=-1, first=0, last=(size-1), middle;

    while (!found && first<=last)
    {
        middle=(first+last)/2;

        if (arr[middle]==value)
        {
            found=true;
            position=middle;
        }
        else if (arr[middle]>value)
        {
            last=middle-1;
        }
        else if (arr[middle]<value)
        {
            first=middle+1;
        }

    }

    return position;

}
