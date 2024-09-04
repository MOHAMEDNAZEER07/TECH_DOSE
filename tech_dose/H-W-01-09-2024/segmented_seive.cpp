#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<bool> simpleSieve(int limit) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int p = 2; p * p <= limit; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= limit; i += p) {
                isPrime[i] = false;
            }
        }
    }
    return isPrime;
}
void segmentedSieve(int L, int R) {
    int limit = sqrt(R) + 1;
    vector<bool> isPrime = simpleSieve(limit);
    
    vector<int> primes;
    for (int p = 2; p <= limit; ++p) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }

    vector<bool> rangeIsPrime(R - L + 1, true);
    
    for (int prime : primes) {
        int start = max(prime * prime, (L + prime - 1) / prime * prime);
        for (int j = start; j <= R; j += prime) {
            rangeIsPrime[j - L] = false;
        }
    }
    if (L == 1) {
        rangeIsPrime[0] = false;
    }
    for (int i = 0; i < rangeIsPrime.size(); ++i) {
        if (rangeIsPrime[i]) {
            cout << (L + i) << " ";
        }
    }
    cout << endl;
}

int main() {
    int L, R;
    cout << "Enter the range [L, R]: ";
    cin >> L >> R;

    segmentedSieve(L, R);

    return 0;
}
