#include <stdio.h>
#define N 5
int stack[N];
int top = -1;
void main()
{
    void push();
    void pop();
  void peek();
 void display();
}
void push()
{
    int x;
    printf("Enter data");
    scanf("%d", &x);
    if (top == N - 1)
    {
        printf("overflow");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

