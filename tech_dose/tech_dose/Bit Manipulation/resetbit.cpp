#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, bitPosition;
    cin >> num >> bitPosition;

    num &= ~(1 << bitPosition);
    
    cout << num << endl;

    return 0;
}
