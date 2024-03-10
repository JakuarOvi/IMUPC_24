#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve(int cs){
    int n;
    cin>>n;
    std::vector<int>v(n);
    int s = 0;
    for(int i = 0; i < n; i++){
        cin>>v[i];
        s += max(0,v[i]-80);
    }

    sort(v.rbegin(),v.rend());
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(v[i]>=80)ans++;
        else{
            if(80 - v[i]<=s){
                ans++;
                s -= 80-v[i];
            }else break;
        }
    }
    cout<<ans<<endl;
}
   
int main()
{

    ios_base::sync_with_stdio(false);cin.tie(0);
    int t=1,cs=0;
    //cin>>t;
    while(t--)
    {
        solve(++cs);
    }

    return 0;
}
