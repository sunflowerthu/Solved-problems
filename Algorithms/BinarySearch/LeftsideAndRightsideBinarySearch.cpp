#include <bits/stdc++.h>

using namespace std;

int inv = 0;

vector<int> k={1,2,2,2,2,3,5,8,9,11};

void rightsidebinarysearch(int n)
{
    sort(k.begin(), k.end());
    int l = -1, r = k.size()-1;
    while(l < r-1){
        int m = (l+r)/2;
        if(k[m] <= n){
            l = m;
        } else {
            r = m;
        }
    }
    cout << l << endl;
    return;
}

void leftsidebinarysearch(int n)
{
    int l = -1, r = k.size()-1;
    while(l < r-1){
        int m = (l+r)/2;
        if(k[m] < n){
            l = m;
        } else {
            r = m;
        }
    }
    cout << r << endl;
    return;
}

int main()
{
    int n = 2;
    cout << n << endl;
    rightsidebinarysearch(n);
    leftsidebinarysearch(n);
    return 0;
}

