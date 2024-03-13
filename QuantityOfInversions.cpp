#include <bits/stdc++.h>

using namespace std;
int inv = 0;

void mergem(vector <int>& v, vector<int>& b, int l, int r)
{
    if(l < r){
        int m = (l+r)/2;
        mergem(v, b, l, m);
        mergem(v, b, m+1, r);

        int k = l;
        for(int i = l, j = m+1; i <= m || j <= r;){
            if((v[i] <= v[j] && i <= m) || j > r){
                b[k] = v[i];
                inv+=j-m-1;
                i++;
            } else{
                b[k] = v[j];
                j++;
            }
            k++;
        }
        for(int i = l; i <= r; i++){
            v[i] = b[i];
        }
    }
}

void mergesort(vector<int>& v)
{
    vector<int> b(v.size());
    mergem(v, b, 0, v.size()-1);
}

int main()
{
    vector<int> k;
    int n;
    cin >> n;
    for(int i = 0; i <n;i++){
        int a;
        cin >> a;
        k.push_back(a);
    }
    mergesort(k);
    for(auto c : k){
        cout << c << " ";
    }
    cout << endl;
    cout << inv;
}

