#include <bits/stdc++.h>

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
    int N;
    std::cin >> N;
    return 0;
}