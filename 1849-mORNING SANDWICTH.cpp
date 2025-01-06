#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){
   Faster;
   int t;                     cin>>t;
   while(t--){
      int b,c,h;              cin>>b>>c>>h;

      if(c+h>=b){
         cout<<((2*b)-1)<<endl;
      }
      else{
         cout<<((2*(h+c))+1)<<endl;
      }
   }
   return 0;
}
