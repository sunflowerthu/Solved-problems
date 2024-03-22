#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9+7;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int> (n, INF));
    for(int i = 0; i < n; i++){
        v[i][i] = 0;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int g;
            cin >> g;
            if(g != -1){
                v[i][j] = g;
            }
        }
    }
    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                 if (v[i][k] < INF && v[k][j] < INF) {
                v[i][j] = min(v[i][j], v[i][k]+v[k][j]);
            }
            }
        }
    }
    int m = -INF;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(m < v[i][j] && v[i][j] < INF){
                m = v[i][j];
            }
        }
    }
    cout << m;
    return 0;
}
