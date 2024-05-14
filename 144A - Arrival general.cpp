#include<iostream>
using namespace std;
int main()
{
    int n,i,mnindex=0,mxindex=101,maximum,minimum;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>mnindex)
        {
            mnindex=a[i];
            maximum=i;
        }
        if(a[i]<=mxindex)
        {
            mxindex=a[i];
            minimum=i;
        }
    }

        if(maximum>minimum)
        {
            minimum++;
        }

    cout<<maximum+(n-1)-minimum;
}
