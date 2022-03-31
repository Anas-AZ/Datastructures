#include<iostream>
using namespace std;

int main()
{
    int a[]={2,4,6,8,10};
    int *p;
    p=new int[5];
    p[0]=3;
    p[1]=5;
    p[2]=7;
    p[3]=9;
    p[4]=11;

    for(int i=0;i<5;i++)
    cout<<a[i]<<"\n";

    for(int i=0;i<5;i++)
    cout<<p[i]<<"\n";

    return 0;

}
