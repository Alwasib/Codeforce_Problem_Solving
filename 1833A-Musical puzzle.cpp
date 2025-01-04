#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<string>st;
    for(int i=0;i<n-1;i++)
    {
        string p="";
        p=p+s[i];
        p=p+s[i+1];
        st.insert(p);
    }
cout<<st.size()<<endl;
}

}
