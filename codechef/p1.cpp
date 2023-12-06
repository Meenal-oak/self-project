#include <iostream>
#include <vector>

using namespace std;  // Import only specific items from the std namespace

vector<int> generatePrimes(int limit) {
    vector<bool> isPrime(limit + 1, true);
    vector<int> primes;

    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p <= limit; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= limit; i += p) {
                isPrime[i] = false;
            }
        }
    }

    for (int p = 2; p <= limit; ++p) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }

    return primes;
}

int main() {
    int limit = 100;
    vector<int> primeList = generatePrimes(limit);

    cout << "Prime numbers up to " << limit << " are:\n";
    for (int prime : primeList) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
