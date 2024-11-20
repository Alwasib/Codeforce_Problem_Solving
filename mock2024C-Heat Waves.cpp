#include<bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float sum=0,f,c=0;
    for(int i=0;i<n;i++)
    {
        cin>>f;
        sum=sum+f;
    }
    double average = static_cast<double>(sum) / n;
    cout << fixed << setprecision(2) << average << endl;


}


