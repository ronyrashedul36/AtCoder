#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a==b && a==c && b==c) || (a!=b && a!=c && b!=c))
        cout <<"No";
    else cout<<"Yes";
    cout << endl;
    return 0;
}
