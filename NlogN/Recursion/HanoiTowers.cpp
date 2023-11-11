#include <iostream>

using namespace std;

void towers(int n, int from, int t, int to)
{
    if (n == 1){
        cout << n << " "<< from << " " << to << endl;
        return;
    }
    towers(n-1, from, to, t);
    cout << n << " " << from << " " << to << endl;
    towers(n-1, t, from, to);
}

int main()
{
    int n;
    cin >> n;
    towers(n, 1, 2, 3);
    return 0;
}
