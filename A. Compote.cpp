#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,c1,b1;
    cin>>a>>b>>c;

    if(a>=1 && b>=2 && c>=4){
         for(int i=a;i>=1;i--){
         if((b/i)>=2 && (c/i)>=4){
            b1=2*i;
            c1=4*i;
            cout<<(i+b1+c1)<<endl;
           break;
         }


    }
    }
    else
        cout<<"0"<<endl;
    return 0;
}
