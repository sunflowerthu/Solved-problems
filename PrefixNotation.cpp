#include <bits/stdc++.h>

using namespace std;

bool is_op(char c)
{
    return c == '+' ||c == '-' || c == '/' || c == '*';
}

int main()
{
    stack<string> st;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 0 && s[i] <= 9){
            st.push(s.substr(i, 1));
        }
        else if(!is_op(s[i])){
            st.push(s.substr(i, 1));
        } else {
            string op2 = st.top();
            st.pop();
            string op1 = st.top();
            st.pop();
            st.push((op1+s.substr(i, 1)+op2));
        }
    }
    cout << st.top();
}
