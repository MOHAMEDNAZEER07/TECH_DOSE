#include <bits/stdc++.h>
using namespace std;

int main() {
    int number;
    cin >> number;

    string result = (number & 1) == 0 ? "even" : "odd";

    cout << result << endl;

    return 0;
}
