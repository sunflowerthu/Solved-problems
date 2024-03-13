#include <bits/stdc++.h>

using namespace std;

//"Очень Легкая Задача
//Условие: есть два принтера, один печатает лист раз в x
// минут, другой раз в y
// минут. За сколько минут они напечатают N
// листов? N>0

int n, x, y;

bool check(int t)
{
    if(t/x + t/y < n - 1){
        return true;
    }
    return false;
}

int binp()
{
    int l = 0, r = x*n;
    while(l < r - 1){
        int m = (l+r)/2;
        if(check(m)){
            l = m;
        } else {
            r = m;
        }
    }
    return r + min(x, y);
}

int main()
{
    cin >> n >> x >> y;
    cout << binp();
}

