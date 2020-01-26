#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll h[n];
    for(int i=0;i<n;i++) cin>>h[i];
    sort(h,h+n);
    ll ans=0;
    for(int i=0;i<n-k;i++){
        ans+=h[i];
    }
    cout << ans << endl;
    return 0;
}
