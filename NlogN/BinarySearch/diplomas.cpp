#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long w, h, n;
    cin >> w >> h >> n;
    long long m, l = 0, r = ceil(sqrt(n))*max(w, h);
    while (l < r){
        m = (r + l)/2;
        long long t = (m / w) * (m / h);
        if (t < n){
            l = m + 1;
        }
        else {
            r = m;
        }
    }
    cout << r;
    return 0;
}
