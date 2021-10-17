#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t ;
    cin>>t;
    while(t--){
        ll n,cnt=0;
        cin>>n;
       string s;
       cin>>s;
       for(ll i=0;i<n;i++){
           for(ll j=i+1;j<=min(i+9,n-1);j++){
               if((j-i)==abs(s[j]-s[i]) ){
               cnt++;
            //cout<<s[i]<<s[j];
           }
           }
       }
       cout<<cnt<<endl;
    }
return 0;
}
