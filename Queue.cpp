#include<iostream>
using namespace std;
#define MAX_SIZE 100

class Queue{
    public:

        int front;
        int rare;
        int arr[MAX_SIZE];

    Queue(): front(-1), rare(-1) {}

    bool isempty() { return front == -1 || front > rare ;}

    bool isfull() { return front == MAX_SIZE - 1; }

    int getfront()
    {
        if(isempty())
        {
            cout<<"Queue is Empty:"<<endl;
            return -1;
        }
    return arr[front];
    }

    int getrare()
    {
        if(isempty())
        {
            cout<<"Queue is Empty:"<<endl;
            return -1;
        }
    return arr[rare];
    }

    void enqueue( int val)
    {
        if(isfull())
        {
            cout<<"Queue is Full:"<<endl;
            return ;
        }
        if(isempty())
        {
            front=0;
        }
        rare++;
        arr[rare]=val;
        
    }

    int dequeue()
    {
        if(isempty())
        {
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        int ans= arr[front];
        front++;
        
        if(isempty())
            front = rare = -1;
        return ans;
    }

    void display()
    {
        if(isempty())
        {
            cout<<"Queue is Empty"<<endl;
            return ;
        }

        cout<<"Queue:"<<endl;
        for(int i=front; i<=rare; i++)
        {
            cout<< arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout<<"\n After Enqueueing"<<endl;
    cout<<"Front Element:"<< q.getfront()<<endl;
    cout<<"Rare Element:"<<q.getrare()<<endl;
    q.display();

    q.enqueue(4);
    q.enqueue(5);
    q.display();

    q.enqueue(6);
    cout<<"\n Dequeueing Element:"<<endl;
    cout<<"Dequeued Element:"<<q.dequeue()<<endl;
    cout<<"Dequeued Element:"<<q.dequeue()<<endl;

    cout<<"\n Afetr Dequeueing:"<<endl;
    cout<<"front Element:"<<q.getfront()<<endl;
    cout<<"Rare Element:"<<q.getrare()<<endl;
    q.display();

    return 0;
}
