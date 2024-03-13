#include <bits/stdc++.h>

using namespace std;
int inv = 0;

void gen(int n, int c1, int c2, string s)
{
    if(c1+c2==n*2){
        cout << s << endl;
        return;
    }
    if(c1 < n){
        gen(n, c1+1, c2, s+'(');
    }
    if(c1 > c2){
        gen(n, c1, c2+1, s+')');
    }

}

int main()
{
    int n;
    cin >> n;
    gen(n, 0, 0, "");
    return 0;
}

