#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;

while(t--) {
        string s;
        int n;
        cin>>n;
        int count = 0;
        cin>>s;
         vector < int > arr(27);
        for(int i = 0 ; i < n ; i++) {
            arr[s[i]-'A']++;
            if(arr[s[i]-'A'] == (s[i]-'A'+1)) {
                count++;
            }
        }
        cout<<count<<endl;
}
}
