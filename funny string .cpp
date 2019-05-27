#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[10001];
    int tt;
    cin>>tt;
    for(int i=0;i<tt;i++){
        cin.ignore();
        cin>>str;
        int cm=0;


        int ln=strlen(str);

        for(int i=0,j=ln-1;i<=(ln)/2;i++){
            if(abs(str[i+1]-str[i])!=abs(str[j-1]-str[j])){
                cm++;
                break;
            }
            j--;
        }
        if(cm>0)
            cout<<"Not Funny"<<endl;
        else
            cout<<"Funny"<<endl;
    }

    return 0;

}
