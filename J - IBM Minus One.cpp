#include<bits/stdc++.h>
using namespace std;
int main ()
{

    int test, i, c=1, t=0;
    cin >> test;
    while(t<test){
        string s;
        cin >> s;

        cout << "String #" << c++ << endl;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='Z'){
                s[i]='A';
            }
            else{
                s[i]=(char)(s[i]+1);
            }
        }

        cout << s << endl;
        cout << endl;
        t++;

    }


    return 0;
}
