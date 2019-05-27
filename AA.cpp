#include <bits/stdc++.h>
#define lng long long int

using namespace std ;

int main()
{
    string str,str1,w_str,cout_str,st;
    int n1,fst,tt;
    cin>>str>>str1>>n1;
    w_str=str;
    cout_str=str1;
    cout<<str<<" "<<str1<<endl;
    map<string,bool>mp;
    mp[str]=1;
    mp[str1]=1;
    while(n1--)
    {
        cin>>str>>str1;
        if(mp[str])
        {
            mp[str]=0;
            mp[str1]=1;
            cout<<str1<<" ";
            st=str1;
        }
        else
        {
            mp[str1]=0;
            mp[str]=1;
            cout<<str<<" ";
            st=str;
        }
        if(mp[w_str])
        {
            cout<<w_str<<"\n";
            cout_str=st;
        }
        else
        {
            cout<<cout_str<<"\n";
            w_str=st;
        }

    }

    return 0;
}
