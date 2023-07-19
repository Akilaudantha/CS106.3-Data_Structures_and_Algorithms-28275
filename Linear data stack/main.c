#include <stdio.h>
#include <stdlib.h>

struct mys{
    int arr[5];
    int top;
}s1;

void push(int x)
{
    s1.top++;
    s1.arr[s1.top]=x;
}

int pop()
{
    int out=s1.arr[s1.top];
    s1.top--;
    return out;
}

void display()
{
    for (int i=0;i<5;i++)
    {
        printf("%d\n",s1.arr[i]);
    }
}

int main()
{
    s1.top=-1;
    push(10);
    push(20);
    printf("out is %d\n",pop());
    push(30);
    push(40);
    push(50);
    printf("out is %d\n",pop());
    display();
    return 0;
}
