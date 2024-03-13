#include <bits/stdc++.h>

using namespace std;

vector<int> k;

void print(vector <int> v)
{
    for(auto c : v){
        cout << c << " ";
    }
}

void mysort()
{
    int left = 0, right = k.size()-1;
    while(left <= right){
        for(int i = right; i > left; --i){
            if(k[i-1] > k[i]){
                swap(k[i-1], k[i]);
            }
        }
        left++;
        for(int i = left; i < right; i++){
            if(k[i] > k[i+1]){
                swap(k[i], k[i+1]);
            }
        }
        right--;
    }
    print(k);
}

int main()
{
    int n = 10;
    for(int i = 0; i < n; i++){
        k.push_back(rand());
    }
    for(int i = 0; i < n; i++){
        cout << k[i] << " ";
    }
    cout << endl;
    mysort();
}
