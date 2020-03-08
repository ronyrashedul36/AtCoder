#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,M;
    cin>>A>>B>>M;
    int a[A],b[B],ma,mb;
    ma=INT_MAX;
    mb=INT_MAX;
    for(int i=0;i<A;i++) cin>>a[i],ma=min(ma,a[i]);
    for(int i=0;i<B;i++) cin>>b[i],mb=min(mb,b[i]);
    int ans=ma+mb;
    int x,y,c;

    for(int i=0;i<M;i++)
    {
        cin>>x>>y>>c;
        ans = min(ans, (a[x-1]+b[y-1]-c));

    }

    ans = min(ans,ma+mb);
    cout << ans << endl;
    return 0;
}
