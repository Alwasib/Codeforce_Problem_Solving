#include<bits/stdc++.h>
using namespace std;

int main() {
int tt;
cin>>tt;

while(tt--) {
        int l1,l2,l3;
        cin>>l1>>l2>>l3;
      if(l1%2==0&&l2%2==0&&l3%2==1||l1%2==1&&l2%2==0&&l3%2==0||l1%2==0&&l2%2==1&&l3%2==0)
        {
            cout<<"NO"<<endl;
        }
       else if(l1==l2){
                if(l3%2==0) {
                        cout<<"YES"<<endl;
                }
                else {
                        cout<<"NO"<<endl;
                }
                }
        else if(l1==l3){
             if(l2%2==0) {
              cout<<"YES"<<endl;
                }
              else {
                        cout<<"NO"<<endl;
                }
        }

       else if(l2==l1){
                if(l3%2==0) {
                        cout<<"YES"<<endl;
                }
                else {
                        cout<<"NO"<<endl;
                }
       }

     else if(l2==l3){
                if(l1%2==0) {
                        cout<<"YES"<<endl;
                }
                else {
                        cout<<"NO"<<endl;
                }
     }

     else if(l3==l1){
                if(l2%2==0) {
                        cout<<"YES"<<endl;
                }
                else {
                        cout<<"NO"<<endl;
                }
     }

     else if(l3==l2){
                if(l1%2==0) {
                        cout<<"YES"<<endl;
                }
                else {
                        cout<<"NO"<<endl;
                }
     }//from here start new idea

     else if(l1>l2 && l1>l3) {
        if((l1-l2)==l3) {
                cout<<"YES"<<endl;
        }
        else {
                cout<<"NO"<<endl;
        }
     }
     else if(l2>l1 && l2>l3) {
        if((l2-l1)==l3) {
                cout<<"YES"<<endl;
        }
         else {
                cout<<"NO"<<endl;
        }
     }
     else if(l3>l2 && l3>l1) {
        if((l3-l2)==l1) {
                cout<<"YES"<<endl;
        }
         else {
                cout<<"NO"<<endl;
        }
     }
}
}
