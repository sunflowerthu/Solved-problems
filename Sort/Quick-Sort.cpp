#include <bits/stdc++.h>

using namespace std;

vector<int> k;

void print(vector <int>& v)
{
    for(auto c : v){
        cout << c << " ";
    }
}

int partitionf(vector <int>& v, int l, int r)
{
    int x = v[r];
    int ls = l;
    for(int i = l; i <= r; i++){
        if(v[i] <= x){
            swap(v[i], v[ls]);
        }
    }
    swap(v[ls], v[r]);
    return ls;
}

void sorting(vector <int>& v, int l, int r)
{
    if(l < r)
    {
        int q = partitionf(v, l, r);
        sorting(v, l, q-1);
        sorting(v, q+1, r);
    }
}

int main()
{
    int n = 10;
    for(int i = 0; i < n; i++){
        k.push_back(10-i);
    }
    for(int i = 0; i < n; i++){
        cout << k[i] << " ";
    }
    cout << endl;
    sorting(k, 0, n-1);
    print(k);
}
