#include<iostream>
using namespace std;

struct node{
    int data; 
    node* next;
};

node* head = NULL;

//Insert a node at the end of th linked list
void insert (int value)
{
    node* newnode= new node();
    newnode-> data= value;
    newnode-> next= NULL;

    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        node* temp= head;
        while(temp-> next !=NULL)
        {
            temp= temp-> next;
        }
        temp-> next= newnode;
    }

    cout<<"Node Inserted:"<<value<<endl;
}

//Deletr a node from linked list
void deletedNode()
{
    if(head == NULL)
    {
        cout << "Linked List is Empty" << endl;
    }
    else
    {
        node* temp = head;
        cout << "Node Deleted: " << temp->data << endl;
        head = head->next;
        delete temp;
    }
}

void display()
{
    if(head == NULL)
    {
        cout<<"Linked List is Empty"<<endl;
    }
    else
    {
        node* temp= head;
        while(temp != NULL)
        {
            cout<<temp-> data<<" ";
            temp= temp-> next;
        }
        cout<<endl;
    }
}

int main()
{
    int choice, value;

    do{
        cout<<"1. Instert Element:"<<endl;
        cout<<"2. Delete Element:"<<endl;
        cout<<"3. Display Element:"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enetr your choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enetr the value to inserted:"<<endl;
                cin>>value;
                insert(value);
                break;

            case 2:
                deletedNode();
                break;

            case 3:
                display();
                break;

            case 4:
                cout<<"program Terminated"<<endl;
                break;

            default:
                cout<<"Invalid Choice"<<endl;
        } 

    }
    while(choice != 4);

    return 0;
}