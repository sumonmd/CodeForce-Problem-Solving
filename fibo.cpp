#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long  int tt,a,b,c,n,ct;
    cin>>tt;
    while(tt--){
            cin>>n;
    a=0;
    b=1;
    ct=0;
    for(long long int i=1;i<=n;i++){

        c=a+b;

        if(n==c){
            ct=1;
            break;
        }
        a=b;
        b=c;



    }
    if(ct==1)
        cout<<"IsFibo"<<endl;
    else
        cout<<"IsNotFibo"<<endl;
    }

    return 0;
}
