#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>h>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        h-=a[i];
        if(h<=0) {
            cout <<"Yes"<<endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
