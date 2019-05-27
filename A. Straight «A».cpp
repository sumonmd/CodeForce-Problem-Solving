#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    double mx,mrk,sum=0;
    cin>>n>>mx;
    for(int i=0;i<n;i++){
        cin>>mrk;
        sum=sum+mrk;
    }
   // cout<<sum<<endl;
   //sum/=n;
    if(sum/n>=mx-0.5)
        cout<<"0"<<endl;
    else{
            double cnt=1;
            double dx=mx-0.5;
            //cout<<dx<<endl;
            //sum=sum/n;
    while((double)(sum/n)>=dx){

            n=n+1;

        cnt++;
        sum=sum+mx;
    }
   cout<<cnt<<endl;
    }


    return 0;
}
