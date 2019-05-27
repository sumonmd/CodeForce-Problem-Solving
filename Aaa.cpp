#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100],str1[100];
    int counter=0;
    gets(str);
    int ln=strlen(str);
    if(str[0]>='a'){
        str1[0]=str[0]-32;

       // cout<<str<<endl;
    }
    for(int i=1;i<=ln;i++){
                if(str[i]>='A'&&str[i]<='Z'){
                    str1[i]=str[i]+32;
                    counter++;
                }
            }
            if(counter==ln-1)
                cout<<str1<<endl;
    else{
        cout<<str<<endl;
    }
    return 0;
}
