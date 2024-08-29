#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, i;
    cin >> a >> i;
    
    cout << ((a & (1 << i)) != 0) << endl;

    return 0;
}
