#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    cin>>k;
    if(k%2==0){
       int mx=k/2;
       cout<<mx<<endl;
       for(int i=0;i<mx;i++){
        cout<<"2 ";
       }
    cout<<endl;
    }
    else{
       int mx=k/2;

        cout<<mx<<endl;
        mx--;
        for(int i=0;i<mx;i++){
            cout<<"2 ";
        }
        cout<<"3"<<endl;
    }
    return 0;
}
