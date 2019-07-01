
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,j;
   string s;
   cin>>s;
   set<char>s1;
   for(i=0;i<s.length();i++) {
    s1.insert(s[i]);
   }
   if(s1.size() == 2) cout << "Yes";
   else cout << "No";
   cout << endl;
   return 0;
}
