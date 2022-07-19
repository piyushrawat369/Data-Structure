#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string A, B;
	    cin>>A>>B;
	    
	    string parent = A + B;
	    
	    int n;
	    cin>>n;
	    
	    string child = "";
	    vector<string> v(n);
	    for(int i=0; i<n; i++){
	        cin>>v[i];
	        child += v[i];
	    }
	    
	    map<char, int> p;
	    for(int i=0; i<parent.size(); i++){
	        p.insert({parent[i], p[parent[i]]++});
	    }
	    
	    map<char, int> c;
	    for(int i=0; i<child.size(); i++){
	        c.insert({child[i], c[child[i]]++});
	    }
	    
	    bool flag = true;
	    
	    for(auto &it: c){
	        if(c[it.first] > p[it.first]){
	            flag = false;
	            break;
	        }
	    }
	    if(flag){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
