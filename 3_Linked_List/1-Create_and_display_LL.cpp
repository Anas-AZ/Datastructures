#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}*first = NULL;

void create(int *A, int n)
{
    Node *t, *last;
    t=new Node;
    t->data = A[0];
    t->next=NULL;
    last=first=t;

    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(Node *p)
{
    if(p!=NULL)
    {
        cout<<p->data;
        display(p->next);

    }
}

int main()
{
    int A[]={1,2,3,4,5,6,7,8};
    create(A, 8);
    display(first);

    return 0;
}
