#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a;
    cin>>a;
    if(a==1||a==2)
        cout<<"0"<<endl;
    else
    {
        int ans;
        a=a-2;
        ans=ceil(1.0*a/2);
        cout<<ans<<endl;
    }


    return 0;
}
