#include<iostream>
using namespace std;

int sum(int n)
{
    if (n>0)
        return sum(n-1)+n;
    return 0;
}

//iterative version
int isum(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
        sum=sum+i;
    return sum;
}


int main()
{
    int n;
    cin>>n;
    cout<<isum(n)<<endl;
    cout<<sum(n)<<endl;
    return 0;
}
