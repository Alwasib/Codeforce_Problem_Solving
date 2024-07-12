#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int Total=0;
    int Temp=0;
    int Max=0;
    int Answer=0;

    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        Total=Total+a[i];

    }

    sort(a,a+n);

    Max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>Max)
        {
            Max=a[i];
        }
    }

    Total=Total-Max;
    Temp=Max*n;
    Answer=Temp-Max;
    cout<<Answer-Total<<endl;

}
