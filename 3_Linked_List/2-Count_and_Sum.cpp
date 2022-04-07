#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}*first = NULL;

void create(int *A, int n)
{
    Node *t, *last;
    first=new Node;
    first->data = A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}


//iterative
int count(Node *p)
{
    int c=0;
    while(p!=NULL)
    {
        c++;
        p=p->next;
    }
    return c;
}


//recursive
int rCount(Node *p)
{
    if(p!=NULL)
    {
        return 1+rCount(p->next);
    }
    else
    return 0;
}


//iterative
int sum(Node *p)
{
    int s=0;
    while(p!=NULL)
    {
        s=s+p->data;
        p=p->next;
    }
    return s;
}


//recursive
int rSum(Node *p)
{
    if(p==NULL)
    return 0;
    return rSum(p->next)+p->data;
}

int main()
{
    int A[]={1,2,3,4,5,6,7,8};
    create(A,8);
    cout<<rCount(first)<<"\n";
    cout<<rSum(first);
    return 0;
}
