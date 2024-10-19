
#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 1000;
vector<bool> is_prime(MAX_N, true);

void sieve(int n) {
    is_prime[0] = is_prime[1] = false; 
    for (int i = 2; i * i < n; i++) { 
        if (is_prime[i]) {
            for (int j = i * i; j < n; j += i)
                is_prime[j] = false;
        }
    }
}

vector<int> push_prime(int size) {
    vector<int> primes;
    for (int i = 0; i < size; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    int n, k;
    cin >> n >> k;

    if (k <= 0) { // Check if n is less than 2 or k is negative
        cout << "YES" << endl; // Invalid input case
        return 0;
    }
    if(n<k){
        cout<<"NO"<<endl;
    }
    else {

    sieve(n); 
    int count = 0;
    vector<int> primes = push_prime(n); 

    for (int i = 0; i < primes.size() - 1; ++i) {
        int sum = primes[i] + primes[i + 1] + 1; 

        if (sum <= n && is_prime[sum]) {
            count++;
        }
    }

    if (count >= k) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
    return 0;
}
