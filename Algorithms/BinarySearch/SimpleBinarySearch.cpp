#include <bits/stdc++.h>

using namespace std;

int inv = 0;

vector<int> k={3, 5, 1, 8, 2};

void binarysearch(int n)
{
    sort(k.begin(), k.end());
    int l = 0, r = k.size()-1;
    while(l <= r){
        int m = (l+r)/2;
        if(k[m] == n){
            cout << "YES";
            return;
        }
        else if(k[m] < n){
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    cout << "NO";
    return;
}
int main()
{
    int n = rand();
    cout << n << endl;
    binarysearch(n);
    return 0;
}
