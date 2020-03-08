#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int h,j;
    h=j=0;
    bool b = false;
    for(int i=0;i<s.size();i++)
    {
        if(i%2==0){
            if(s[i]!='h') {
                b=true;
                break;
            }
        }else{
            if(s[i]!='i'){
                b=true;
                break;
            }
        }
    }
    if(b || s.size()%2) cout <<"No";
    else cout <<"Yes";
    cout << endl;
    return 0;
}
