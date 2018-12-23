#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;

std::vector<bool> IsPrime;

void sieve(size_t max) {
    if (max+1 > IsPrime.size()) {
        IsPrime.resize(max+1, true);
    }
    IsPrime[0] = false;
    IsPrime[1] = false;

    for (size_t i = 2; i*i <= max; i++) {
        if (IsPrime[i]) {
            for (size_t j = 2; i*j <= max; j++) {
                IsPrime[i*j] = false;
            }
        }
    }
}
 
int main(int argc, char *argv[])
{
    ull N, P;
    std::cin >> N >> P;

    std::vector<int> shisuu;
    sieve(P);
    for (int i = 0; i < IsPrime.size(); i++) {
        if (IsPrime[i]) {
            int temp = i;
            int count = 0;
            ull dummy = P;
            while (dummy % temp == 0) {
                dummy /= temp;
                count++;
            }
            shisuu.push_back(count);
        }
    }

    for (int i = 0; i < shisuu.size(); i++) {
        std::cout << shisuu[i] << std::endl;
    }
    return 0;
}