#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    std::string S, T;
    std::cin >> S >> T;

    int N = S.size();
    bool flag = false;
    for (int i = 0; i < N; i++) {
        if (S == T) {
            flag = true;
            break;
        }

        std::string temp;
        temp = S[N-1];
        S = temp + S.substr(0, N-1);
    }

    if (flag) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No"  << std::endl;
    }
    return 0;
}