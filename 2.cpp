#include <iostream>
using namespace std;
int fibb(int n)
{
    int a=1;
    int b=1;
    int c=0;
    int sum =0;
    while(c<n)
    {
        c=a+b;
        if(b%2==0)
        {
            sum=sum+b;
        }
        a=b;
        b=c;
    }

    return sum;
}

int main()
{
    int n;
    cin>>n;
    cout<<fibb(n);

    return 0;
}