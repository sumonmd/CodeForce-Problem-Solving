#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<char,int>arr;
    string str="bangladesh";
    for(char i='a';i<='z';i++){
        arr[i]=0;
    }
    for(int j=0;j<str.size();j++){
        arr[str[j]]++;
    }
    for(char i='a';i<'z';i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
