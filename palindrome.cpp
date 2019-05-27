#include<bits/stdc++.h>
using namespace std;

int ispl(char* str,int l,int r)
{
    return ((l>=r)||(str[l]==str[r] && ispl(str,l+1,r-1)));
}
int main()
{
    int t;
    char str[100];
    cin>>t;
    for(int i=0;i<t;i++){
            cin>>str;
    int ln=strlen(str);

    if(ispl(str,0,ln-1))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

      }

    return 0;
}
