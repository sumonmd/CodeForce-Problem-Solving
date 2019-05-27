#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,tt;


    cin>>tt;
    while(tt--){

    cin>>b;
    int sum=0;
    int cnt=0;
    while(b%10!=0)
    {
        sum=b%10;
      if(b%sum==0){
        cnt=cnt+1;
      }
       b=b/10;

    }
    cout<<cnt<<endl;
    }


    return 0;

}
