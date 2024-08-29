#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;

    string lowerToUpper = "";
    string upperToLower = "";
    
    for (char ch : input) {
        if (islower(ch)) {
            upperToLower += (ch ^ (1 << 5));
        } else {
            lowerToUpper += (ch + (1 << 5));
        }
    }

    cout << lowerToUpper << upperToLower;

    return 0;
}
