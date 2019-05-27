#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100],cps[100];

    gets(str);
    int ln=strlen(str);
    if(str[0]>='a' && str[0]<='z'){
        cps[0]=str[0]-32;
    }
    else
        cps[0]=str[0];
        int cnt=0;
    for(int i=1;i<=ln;i++){
        if(str[i]>='A'&& str[i]<='Z'){
            cps[i]=str[i]+32;
            cnt++;
        }
        else{
           cps[i]=str[i]-32;
           cnt++;
        }
    }
    if(cnt==ln-1)
        cout<<cps<<endl;
    else
        cout<<str<<endl;

    return 0;
}
