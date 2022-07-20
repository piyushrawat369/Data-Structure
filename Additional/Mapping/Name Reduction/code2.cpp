#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string A,B;
        cin>>A>>B;
        
        map<char,int> parent;
        
        for(auto c: A+B){
            if(parent.count(c)){
                parent[c]++;
            }
            else{
                parent[c] = 1;
            }
        }
        
        int n, flag = 0;
        cin>>n;
        string child = "";
        for(int i=0; i<n; i++){
            string s;
            cin>>s;
            child += s;
        }
        
        for(auto c: child){
            if(parent[c] > 0)
                parent[c]--;
            else{
                flag = 1;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag == 0){
            cout<<"YES"<<endl;
        }
    }
}
