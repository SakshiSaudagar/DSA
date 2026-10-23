#include<iostream>
using namespace std;

int stack[5];
int top = -1;

void push (int x)
{
    if (top == 4)
        cout<<"overflow";
    else
        stack[++top]=x;
}

void pop ()
{
    if (top == -1)
        cout<<"underflow";
    else
        top--;
}

void display()
{
    for(int i=0; i<=top; i++)
        cout<< stack[i] <<" ";
    cout<<endl;
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    pop();

    display();

    return 0;
}