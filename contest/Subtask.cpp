#include <bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int n,m,k,sum=0;
        cin>>n>>m>>k;
        int a[n];
        for(int i=0;i<n;i++){ cin>>a[i];
            sum+=a[i];
        }
        if(sum==n) 
        cout<<"100"<<endl;
        else{
            int res=0;
      for(int i=0;i<m;i++){
          if(a[i]==1){
             res=1 ;
          }
          else {res=0;
          break;}
      }  
    if(res==0) cout<<"0"<<endl;
    else cout<<k<<endl;
        }
    }
return 0;
}
