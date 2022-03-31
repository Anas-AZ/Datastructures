#include<iostream>
using namespace std;

//Using iteration
int fib(int n)
{
    int t0=0,t1=1,s=0;
    if(n<=1)
        return n;
    for(int i=2;i<=n;i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}



//Using recursion
int rfib(int n)
{
 if(n<=1)
                return n;
 else
    return rfib(n-2)+rfib(n-1);
}



//Using memoization
int f[10];
int mfib(int n)
{
    if(n<=1){
        f[n]=n;
        return n;
    }
    else{
        if(f[n-2]==-1)
            f[n-2]=mfib(n-2);
        if(f[n-1]==-1)
            f[n-1]==mfib(n-1);
            f[n]=f[n-2]+f[n-1];
        return f[n-2]+f[n-1];
    }
}



int main()
{
    int i;
    for (i=0;i<10;i++){
        f[i]=-1;
    }
    cout<<mfib(6)<<endl;
    return 0;
}
