#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] % 2 != 0) {
            count++;
        }
    }

    if (count % 2 == 0) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO"  << std::endl;
    }
    return 0;
}