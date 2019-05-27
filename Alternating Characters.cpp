#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[1000001];
    int tt;
    cin>>tt;
    while(tt--){
    int cnt=0;
    cin.ignore();
    cin>>str;
    int ln=strlen(str);
    for(int i=0;i<ln;i++){
        if(str[i]==str[i+1])
            cnt++;
    }
    cout<<cnt<<endl;
    }
}
