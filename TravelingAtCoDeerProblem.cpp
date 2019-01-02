#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<int> a(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }

    int min = MOD;
    for (int i = 0; i < N; i++) {
        if (min > a[i]) {
            min = a[i];
        }
    }

    int max = 0;
    for (int i = 0; i < N; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }

    std::cout << max - min << std::endl;
    return 0;
}