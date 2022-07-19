#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string a;
	    cin>>a;
	    string b;
	    cin>>b;
	    int c;
	    cin>>c;
	    string str;
	    for( int i=0;i<c;i++){
	        string s;
	        cin>>s;
	        str=str+s;
	    }
	    a = a + b;
	    unordered_map<char,int>parent;
	    for(int i = 00; i<a.length();i++) parent[a[i]]++;
	    int i;
	    bool flag = true;
	    for( i = 0;i<str.length();i++){
	        if(parent.find(str[i])!=parent.end()){
	            parent[str[i]]--;
	            if(parent[str[i]]==0) parent.erase(str[i]);
	        }
	        else flag = false;
	    }
	    if(flag) cout<<"YES";
	    else cout<<"NO";
	    cout<<endl;
	    
	}
	return 0;
}
