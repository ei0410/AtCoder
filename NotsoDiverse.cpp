#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007

#define N_MAX 200001
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int N, K;
    std::cin >> N >> K;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    std::vector<int> bucket(N_MAX);
    for (int i = 0; i < N; i++) {
        bucket[A[i]]++;
    }

    std::sort(bucket.begin(), bucket.end());

    int count = 0;
    for (int i = 0; i < N_MAX; i++) {
        if (bucket[i] != 0) {
            count++;
        }
    }

    int ans = 0;
    if (count <= K) {
        std::cout << ans << std::endl;
    } else {
        int temp = 0;
        for (int i = 0; i < N_MAX; i++) {
            if (bucket[i] != 0) {
                ans += bucket[i];
                temp++;
            }
            if (count - temp <= K) {
                break;
            }
        }
        std::cout << ans << std::endl;
    }

    return 0;
}