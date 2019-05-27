#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    string a;
    string b;
    getline(cin,str);
    int s=0,s1=0;
    int ln=str.size();
    for(int i=0;i<=ln;i++){

       if(str[i]=='V')
        a[i]='K';
    else if(str[i]=='K')
        a[i]='V';
    }
    for(int i=0;i<=ln;i++ ){
        if(a[i]=='V'&&a[i+1]=='K'){
            s=s+1;
        }

    }
    for(int i=0;i<=ln;i++){

        if(str[i]=='V'&&str[i+1]=='K')
            s1=s1+1;
    }

    int mx=max(s1,s);
    cout<<mx<<endl;
    return 0;
}
