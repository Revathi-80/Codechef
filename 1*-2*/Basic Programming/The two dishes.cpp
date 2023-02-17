//https://www.codechef.com/LP1TO201/problems/MAX_DIFF

#include<bits/stdc++.h>
using namespace std;
#define int long long int
//vector<int>pre(1e6+1);
const int N=1e6 + 5;
bool prime[N];

void setIO(string s) {
  freopen((s+".in").c_str(),"r",stdin);
  freopen((s+".out").c_str(),"w",stdout);
}

signed main(){
   int t;
   cin>>t;
   while(t--) {
       int n,s;
       cin>>n>>s;
       if(n==s) {
           cout<<n<<endl;
       }
       else if(n<s) {
           cout<<abs(2*n-s)<<endl;
       }
       else {
           cout<<s<<endl;
       }
   }
 
  return 0;
 }

/*-----------------------------------------------------------------------------------------------------*/
//  auto cmp=[](const pair<int,int>&a ,const pair<int,int>&b){
//   return a.first>b.first;
// };
/*--------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------*/
void sieve(){
   prime[0]=prime[1]=1;
   for(int i=2;i<=N;i++){
    if(!prime[i]) {
      for(int j=i*i;j<=N;j+=i){
        prime[j]=1;
      }
    }
   }
}
/*-----------------------------------------------------------------*/

void PrimeFactors(int n,vector<int>&ans) {
   while (n%2 == 0){
      ans.push_back(2);
      n = n/2;
   }
   for (int i = 3; i <= sqrt(n); i = i+2){
      while (n%i == 0){
         ans.push_back(i);
         n = n/i;
      }
   }
   if (n > 2)
   ans.push_back(n);
}




  