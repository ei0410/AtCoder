#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int N, T;
    std::cin >> N >> T;

    std::vector<int> c(N), t(N);
    for (int i = 0; i < N; i++) {
        std::cin >> c[i] >> t[i];
    }

    std::vector<int> score;
    bool flag = true;
    for (int i = 0; i < N; i++) {
        if (t[i] <= T) {
            flag = false;
            score.push_back(c[i]);
        }
    }

    if (flag) {
        std::cout << "TLE" << std::endl;
    } else {
        int min = INF;
        for (int i = 0; i < score.size(); i++) {
            if (min > score[i]) {
                min = score[i];
            }
        }

        std::cout << min << std::endl;
    }
    return 0;
}