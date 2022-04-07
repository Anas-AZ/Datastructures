#include<iostream>
#include<climits>
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

int maxElement(Node *p)
{
    int m=INT_MIN;
    while(p!=NULL)
    {
        if(p->data > m)
        m=p->data;
        p=p->next;
    }
    return m;
}

int rMaxElement(Node *p)
{
    int x=0;
    if(p==NULL)
    return INT_MIN;
    x=rMaxElement(p->next);
    if(x > p->data)
    return x;
    else
    return p->data;
}



int main()
{
    int A[]={1,2,3,4,5,6,7,8};
    create(A,8);
    cout<<rMaxElement(first);
    
    return 0;
}
