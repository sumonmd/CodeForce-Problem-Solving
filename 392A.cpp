#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int c=abs(a-b);
    if(a==0&&b==0)
        cout<<"NO"<<endl;
    else if(c>=2)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    return 0;
}
