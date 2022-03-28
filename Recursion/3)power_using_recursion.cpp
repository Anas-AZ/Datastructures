#include<iostream>
using namespace std;

int pow(int m,int n)
{
    if(n==0)
        return 1;
    return pow(m,n-1)*m;
}

/*  if we perform one multiplication on the same value, power will reduce to half
    eg- 2^8 = (2*2)^4
       2^9 = 2* (2*2)^4 */

int rpow(int m,int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
        return rpow(m*m,n/2);
    else
        return m*rpow(m*m,(n-1)/2);
}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<rpow(m,n)<<endl;
    return 0;
}
