#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    int bitCount = 0;
    while (a) {
        bitCount += a & 1;
        a >>= 1;
    }

    cout << bitCount << endl;
    return 0;
}
