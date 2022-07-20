#include <bits/stdc++.h>
using namespace std;

void check(string s,int n,unordered_map<char,int> &m){
    for(int i=0;i<n;i++){
        if(m[s[i]])
        m[s[i]]--;
        else
        {cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main() {
 int t;
 cin>>t;
 while(t--){
   string a,b;
   cin>>a>>b;
    a=a+b;
   unordered_map<char,int>m;
   for(int i=0;i<a.length();i++)
   m[a[i]]++;
   int child;
   cin>>child;
   string c,d;
   for(int i=0;i<child;i++){
       cin>>c;
       d+=c;
   }
   check(d,d.length(),m);
  
 }
	return 0;
}
