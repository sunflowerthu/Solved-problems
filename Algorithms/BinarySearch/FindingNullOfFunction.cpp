#include <bits/stdc++.h>

using namespace std;

void nulloffunc(int n)
{
    long double left = 0.0;
    long double right = 10.0;
    for (int i = 0; i < 100; i++) {
        long double middle = (left + right) / 2;
        if (middle * middle > n) {
            right = middle;
        }
        else {
            left = middle;
        }
    }
    cout << left << " " << right;
}

int main()
{
    int n = 4;
    nulloffunc(n);
    return 0;
}
