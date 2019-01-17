#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
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

    int bucket[100000];
    for (int i = 0; i < 100000; i++) {
        bucket[i] = 0;
    }
    for (int i = 0; i < N; i++) {
        bucket[a[i]]++;
    }

    int max = 0;
    for (int X = -1; X <= 100001; X++) {
        int count = 0;
        if (X == -1) {
            count = bucket[0];
        } else if (X == 0) {
            count = bucket[0] + bucket[1];
        } else if (X == 100000) {
            count = bucket[99998] + bucket[99999];
        } else if (X == 100001) {
            count = bucket[99999];
        } else {
            count = bucket[X-1] + bucket[X] + bucket[X+1];
        }
        if (max < count) {
            max = count;
        }
    }

    std::cout << max << std::endl;
    return 0;
}