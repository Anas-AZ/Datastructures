#include<iostream>
using namespace std;

int main()
{
    int a[5];
    int b[5]={1,2,3,4,5};
    int c[10]={2,4,6};
    int d[5]={0};  //Creates an array of all zeroes
    int e[]={1,2,3,4,5,6};

    for(int i=0;i<5;i++)
    cout<<&a[i]<<"\n";

    return 0;
}
