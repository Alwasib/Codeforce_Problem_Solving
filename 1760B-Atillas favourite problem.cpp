#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ts;
    cin>>ts;
    while(ts--)
    {
        int nm;
        cin>>nm;
        string s,p;
        cin>>s;
        sort(s.begin(),s.end());

            char A=s[nm-1];
            char arr[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
            for(int i=0;i<26;i++)
            {
                if(arr[i]==A)
                {
                    cout<<i+1<<endl;
                }
            }


    }
}
