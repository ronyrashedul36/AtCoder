#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int mi=min(n,m);
    int ma=max(n,m);
    int c=ma;
    int mmi=mi;
    c--;
    while(c--){
        mi*=10;
        mi+=mmi;
    }
    cout << mi << endl;
    return 0;
}
