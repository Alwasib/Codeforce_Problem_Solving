#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
int a,b; cin>>a>>b;
int mn = min(a,b);
int ans=1;
for(int i=1; i<=mn; i++) {
        ans*=i;
}

//int mn = min(ans,ans1);
cout<<ans<<endl;

}
