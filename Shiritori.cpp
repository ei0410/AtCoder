#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<std::string> W(N);
    for (int i = 0; i < N; i++) {
        std::cin >> W[i];
    }

    bool flag = true;
    for (int i = 0; i < N-1; i++) {
        if (W[i].back() != W[i+1].front()) {
            flag = false;
        }
    }

    for (int i = 0; i < N-1; i++) {
        for (int j = i+1; j < N; j++) {
            if (W[i] == W[j]) {
                flag = false;
            }
        }
    }

    if (flag) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No"  << std::endl;
    }
    return 0;
}