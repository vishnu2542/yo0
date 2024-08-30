#include <iostream>
using namespace std;
int pow(int x,int n,int m)
{
   int ans=1;
   for(int i=0;i<n;i++)
   {
      ans=ans*x;
   }

   ans=ans%m;
   return ans;
}

int main()
{
   int x,n,m;
   
   cin>>x;
   cin>>n;
   cin>>m;
   int a=pow(x,n,m);
   cout<<a;
   

}