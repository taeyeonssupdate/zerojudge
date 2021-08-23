#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

vector<int> findPrime(int num);

int main(int argc, char const *argv[]) {
    int num;
    string ans = "";
    scanf("%d", &num);
    vector<int> primes = findPrime(num);
    for (int prime : primes) {
        int times = 0;
        while (num % prime == 0) {
            times += 1;
            num = (int) (num / prime);
        }
        if (times != 0) {
            if (ans != "") {
                ans += " * ";
            }
            if (times > 1) {
                ans += to_string(prime) + "^" + to_string(times);
            } else {
                ans += to_string(prime);
            }
        }
        if (prime > num) {
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}

vector<int> findPrime(int num) {
    bool prime_bool[num + 1];
    memset(prime_bool, 1, sizeof(prime_bool));

    for (int p = 2; p * p <= num; p++) {
        if (prime_bool[p] == true) {
            for (int i = p * p; i <= num; i += p) {
                prime_bool[i] = false;
            }
        }
    }
    vector<int> prime;
    for (int p = 2; p <= num; p++) {
        if (prime_bool[p]) {
            prime.push_back(p);
        }
    }
    return prime;
}