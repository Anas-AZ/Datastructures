#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return fact(n-1)*n;
}


int nCr(int n,int r)
{
    int num,den;

    num=fact(n);
    den=fact(r)*fact(n-r);

    return num/den;
}



// using formula nCr=(n-1)C(r-1) + (n-1)C(r)
int C(int n,int r)
{
    if(r==0 || n==r)
        return 1;
    else
        return C(n-1,r-1)+C(n-1,r);
}


int main()
{
    cout<<nCr(5,3);
    return 0;
}
