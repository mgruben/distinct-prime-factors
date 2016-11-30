#include <iostream>
using namespace std;

/**
 * Given an integer n, returns the number of prime factors which that
 * number has.
 * Ex. 14 -> 2, 15 -> 2.
 * Ex. 644 -> 3, 645 -> 3, 646 -> 3.
 */
int numFactors(int n) {
    if (n <= 3) return 1;
    if (n % 2 == 0) return 1 + numFactors(n / 2);
    if (n % 3 == 0) return 1 + numFactors(n / 3);
    int i = 5;
    while (i * i <= n) {
        if (n % i == 0) return 1 + numFactors(n / i);
        if (n % (i + 2) == 0) return 1 + numFactors(n / (i + 2));
        i += 6;
    }
    return true;
}

int main() {
    for (int i: {14, 15, 644, 645, 646}) {
        cout << numFactors(i) << endl;
    }
    return 0;
}
