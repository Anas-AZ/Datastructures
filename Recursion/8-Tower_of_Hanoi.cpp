#include<iostream>
using namespace std;

void Toh(int n,int a,int b,int c)
{
    if(n>0)
     {
         Toh(n-1,a,c,b);
         cout<<"move from"<<a<<" to "<<c<<"\n";
         Toh(n-1,b,a,c);
     }
}


int main()
{
Toh(4,1,2,3);
return 0;

}
