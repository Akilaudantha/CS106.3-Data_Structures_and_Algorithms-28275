#include <stdio.h>
#include <stdlib.h>

struct myq{
    int array[5];
    int rear,front;
}s1;

void enq(int ele)
{
    s1.rear++;
    s1.array[s1.rear]=ele;
}
int deq()
{
    int out=s1.array[s1.front];
    s1.front++;
    return out;
}

void display()
{
    for (int i=0; i<5; i++)
    {
      printf("%d\n",s1.array[i]);
    }
}

int main()
{
    s1.front=0;
    s1.rear=-1;
    enq(10);
    enq(20);
    deq();
    enq(30);
    enq(40);
    enq(50);
    display();

    return 0;
}
