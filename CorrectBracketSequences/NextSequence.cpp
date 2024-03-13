#include <bits/stdc++.h>

using namespace std;
int inv = 0;

string next(string s)
{
    int c1 = 0, c2 = 0;
    for(int i = s.length()-1; i >= 0; i--){
        if(s[i] == '('){
            c1++;
            if (c2 > c1){
                break;
            }
        } else {
            c2++;
        }
    }
    s.erase(s.length()-c1-c2);
    if(s==""){
        return "No?";
    } else{
        s+=')';
        for(int i = 0; i < c1; i++){
            s+='(';
        }
        for(int i = 0; i < c2-1; i++){
            s+=')';
        }
    }
    return s;
}

int main()
{
    string s;
    cin >> s;
    cout << next(s);
    return 0;
}

