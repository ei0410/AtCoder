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

    std::vector<int> h(N);
    for (int i = 0; i < N; i++) {
        std::cin >> h[i];
    }

    int count = 0;
    bool flag = true;
    bool to = false;
    while(flag) {
        for (int i = 0; i < N; i++) {
            if (h[i] != 0) {
                break;
            }
            if (i == N-1 && h[N-1] == 0) {
                to = true;
                break;
            }
        }

        if (to) {
            break;
        }

        int zero_count = 0;

        for (int i = 1; i < N; i++) {
            if (h[i-1] == 0 && h[i] != 0) {
                zero_count++;
            }
        }

        if (h[0] != 0) {
            zero_count++;
        }

        for (int i = 0; i < N; i++) {
            if (h[i] > 0) {
                h[i]--;
            }
        }

        if (zero_count == 0 || zero_count == 1) {
            count++;
        } else {
            count += zero_count;
        }

        for (int i = 0; i < N; i++) {
            if (h[i] != 0) {
                break;
            }
            if (i == N-1) {
                if (h[i] == 0) {
                    flag = false;
                }
            }
        }
    }

    std::cout << count << std::endl;

    return 0;
}