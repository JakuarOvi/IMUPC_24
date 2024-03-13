#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
         sum+=a[i];
    }
    int t;
    cin>>t;
    for(int i=1;i<=n;i++)
    {
         int result=(t/100)*(a[i]);
         cout<<"Budget for Club "<<i<<":"<<result<<" Taka"<<endl;
    }


}
