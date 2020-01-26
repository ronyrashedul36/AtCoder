#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll h,ans=0,i=1;
    cin>>h;
    while(h>1) {
            i=2*i;
        ans+=i;

        h=h/2;
        //cout << h << " ";
    }
    cout << ans+1 << endl;
    return 0;
}
