#include <iostream>
#include <vector>
using namespace std;

const int n = 50;
vector<bool> isPrime(n, 1);
vector<int> primes;

void sieve() {
    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i < n; i++) {
        if (isPrime[i] == true) {
            for (int j = 2 * i; j < n; j += i) {
                isPrime[j] = false;  
            }
        }
    }

    for (int i = 2; i < n; i++) {  
        if (isPrime[i] == true) {
            primes.push_back(i);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    sieve();

  //bool found = false;
    for (int i = 0; i < primes.size() - 1; i++) {
        if (primes[i] == n && primes[i + 1] == m) {
            cout << "YES" << endl;
            //found = true;
            break;
        } else if (primes[i] == n && primes[i + 1] != m) {
            cout << "NO" << endl;
            //cout << primes[i] << " " << primes[i + 1] << endl;
           
            break;
        }
    }

  

    return 0;
}
