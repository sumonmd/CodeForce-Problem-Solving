#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    for(int i=0;i<n;i++){
     string strin=str[i];
     for(int j=0;j<=strin[j]!=0;j++){
        if(strin[j]>='A'&& strin[j]<='Z'){
            cout<<strin[j]-64;
        }
     }
     cout<<endl;
    }

    return 0;
}
