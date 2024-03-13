#include <bits/stdc++.h>

using namespace std;

vector<int> k;

void print(vector <int>& v)
{
    for(auto c : v){
        cout << c << " ";
    }
}

void mysort(vector <int>& v)
{
    double factor  = 1.247;
    double step = v.size()-1;
    while(step>=1){
        for(int i = 0; i+step < v.size(); i++){
            if(v[i] > v[i+1]){
                swap(v[i], v[i+1]);
            }
        }
        step/= factor;
        for(int i = 0; i < v.size(); i++){
            for(int j = i; j < v.size()-i; j++){
                if(v[j] > v[j+1]){
                    swap(v[j], v[j+1]);
                }
            }
        }

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
    mysort(k);
}
