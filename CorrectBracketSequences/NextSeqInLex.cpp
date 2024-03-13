#include <bits/stdc++.h>

using namespace std;

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

void order(int n)
{
    string s ="";
    for(int i = 0; i < n; i++){
        s+='(';
    }
    for(int j = 0; j < n; j++){
        s+=')';
    }
    cout << s;
    while(next(s) != "No?"){
        cout << next(s) << endl;
        s = next(s);
    }
}
int main()
{
    int n;
    cin >> n;
    order(n);
    return 0;
}

