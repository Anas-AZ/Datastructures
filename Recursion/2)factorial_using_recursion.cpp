#include<iostream>
using namespace std;


int fact(int n)
{
    if (n>0)
        return fact(n-1)*n;
    else if(n==0)
    return 1;
}

//iterative code
int ifact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}

int main()
{
    int n;
    cin>>n;
    cout<<ifact(n)<<endl;
    return 0;
}
