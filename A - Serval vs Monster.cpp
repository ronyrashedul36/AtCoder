#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,a,ans=0;
    cin>>h>>a;
    ans = h%a==0?h/a:h/a+1;
    cout << ans << endl;
    return 0;
}
