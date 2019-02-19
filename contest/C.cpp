#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    int N, M;
    std::cin >> N >> M;

    int res0 = -1;
    int res1 = -1;
    int res2 = -1;
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N-i; j++) {
            int k = N-i-j;
            int total = i*2 + j*3 + k*4;
            if (total == M) {
                res0 = i;
                res1 = j;
                res2 = k;
            }
        }
    }

    std::cout << res0 << " " << res1 << " " << res2 << std::endl;
    return 0;
}
