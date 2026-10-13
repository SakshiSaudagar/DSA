
#include<iostream>
using namespace std;

#define SIZE 5

class CircularQueue
{
public:
    int queue[SIZE];
    int front, rear;

    CircularQueue()
    {
        front = -1;
        rear = -1;
    }

    // Insert Element
    void enqueue(int value)
    {
        if ((rear + 1) % SIZE == front)
        {
            cout << "Queue is full" << endl;
            return;
        }

        if (front == -1)
            front = 0;

        rear = (rear + 1) % SIZE;
        queue[rear] = value;

        cout << "Inserted: " << value << endl;
    }

    // Delete Element
    void dequeue()
    {
        if (front == -1)
        {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Deleted: " << queue[front] << endl;

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % SIZE;
        }
    }

    // Display Elements
    void display()
    {
        if (front == -1)
        {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Queue Elements are: ";
        int i = front;

        while (i != rear)
        {
            cout << queue[i] << " ";
            i = (i + 1) % SIZE;
        }

        cout << queue[rear] << endl;
    }
};

int main()
{
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    q.dequeue();
    q.display();

    q.dequeue();
    q.display();

    return 0;
}