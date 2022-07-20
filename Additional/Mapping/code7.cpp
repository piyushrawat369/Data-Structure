#include <iostream>

using namespace std;
int main() 
{	
    int t;

    cin>>t;
    while(t--){
    int count[26]{0};
    string a , b;
    cin >> a >> b;
    for(int i = 0 ; i<a.length() ; i++){
        count[a[i] - 97]++;
    }
    for(int j = 0 ; j<b.length() ; j++){
        count[b[j] - 97]++;
    }
    string inarray = "YES \n";
    int n;
    cin>>n;
    for(int index = 1 ; index <= n ; index++){

        string c;
        cin>>c;
        for(int k= 0 ; k<c.length(); k++){
         if(count[c[k]-97]>0){
            count[c[k]-97]-- ;
         }   
         else{
          inarray = "NO \n";
         } 
       
        }
    
    }
    cout<<inarray; 
    
    }

	return 0;
}
