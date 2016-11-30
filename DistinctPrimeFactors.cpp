#include <iostream>
#include <vector>
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

void factors(int n, vector<int> *v) {
    if (n <= 3){
        v->push_back(n);
        return;
    }
    if (n % 2 == 0) {
        v->push_back(2);
        factors(n / 2, v);
        return;
    }
    if (n % 3 == 0) {
        v->push_back(3);
        factors(n / 3, v);
        return;
    }
    int i = 5;
    while (i * i <= n) {
        if (n % i == 0) {
            v->push_back(i);
            factors(n / i, v);
            return;
        }
        if (n % (i + 2) == 0) {
            v->push_back(i + 2);
            factors(n / (i + 2), v);
            return;
        }
        i += 6;
    }
    v->push_back(n);
}

/**
 * Given a sorted vector of integers, returns the number of distinct
 * integers in that vector.
 */
int numDistinct(vector<int> v) {
    int c = 1;
    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] != v[i + 1]) c++;
    }
    return c;
}

int main() {
    vector<int> v;
    vector<int> seq;
    int n = 4;
    for (int i = 4; seq.size() < n; i++) {
        factors(i, &v);
        if (numDistinct(v) == n) seq.push_back(i);
        else seq.clear();
        v.clear();
    }
    for (int i: seq) cout << i << endl;
}
