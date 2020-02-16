
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int i;
    for(i=0;i<n;i++){
        if(a[i]%2) continue;
        if(a[i]%3==0 || a[i]%5==0) continue;
        break;
    }
    if(i==n){
        cout <<"APPROVED";
    }else
    cout << "DENIED";
    cout << endl;
    return 0;
}
