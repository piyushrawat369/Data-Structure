#include <iostream>
#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    string a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    string arr[n];
    string c = "";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        c += arr[i];
    }
    string p = a + b;
    int l1 = p.size();
    int l2 = c.size();
    bool flag = true;
    map<char,int> p1;
    map<char,int> c1;
    for(int i=0;i<l1;i++){
        p1[p[i]]++;
    }
    for(int i=0;i<l2;i++){
        c1[c[i]]++;
    }
    if(l1>=l2){
        for(auto x:c1){
            if(c1[x.first]>p1[x.first]){
               flag = false;
               break;
            }
        }
    }else{
        cout<<"NO\n";
        return;
    }
    if(flag){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    
}


int32_t main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
