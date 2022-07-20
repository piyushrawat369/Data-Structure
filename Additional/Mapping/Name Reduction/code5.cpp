#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string a,b;
	    cin>>a>>b;
	    string k;
	    k=a+b;
	    int n;
	    cin>>n;
	    string z="";
	    
	    for(int i=0;i<n;i++)
	    {
	       string s;
	       cin>>s;
	      
	          z=z+s;
	    }
	    unordered_map<char,int>p;
	    unordered_map<char,int>su;
	    for(int i=0;i<k.size();i++)
	        {
	        p[k[i]]++;
	        
	      }
	    for(int i=0;i<z.size();i++)
	    {
	        su[z[i]]++;
	        
	    }
	    int c=0;
	    for( auto i:su)
	    {
	        for(auto j:p)
	          {
	             if(i.first==j.first&&j.second>=i.second)
	             {
	                 c++;
	                
	             }
	        
	          }
	    }
	    
	    
	   if(c==su.size())
	    {
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	 
	    
	}
	return 0;
}
