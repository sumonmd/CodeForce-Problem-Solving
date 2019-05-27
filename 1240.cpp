#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
    string str;
    string str1;
    getline(cin,str);
    getline(cin,str1);

    int ln=str.size();
    int ln1=str1.size();
    if(ln1>ln)
        swap(ln,ln1);
    int ck=0;
    for(int i=ln1,j=ln;i>0;i--)
    {
        if(str[i]!=str1[j]){
            ck=1;
            break;
        }
        j--;
    }
    if(ck==0)
        cout<<"encaixa"<<endl;
    else
        cout<<"nao encaixa"<<endl;
    }

    return 0;
}
