#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int N, Q;
    std::cin >> N >> Q;
    
    std::vector<int> l(Q), r(Q);
    for (int i = 0; i < Q; i++) {
        std::cin >> l[i] >> r[i];
    }

    std::string s(N, '0');

    for (int i = 0; i < Q; i++) {
        for (int j = l[i]-1; j < r[i]; j++) {
            if (s[j] == '0') {
                s[j] = '1';
            } else {
                s[j] = '0';
            }
        }
    }

    std::cout << s << std::endl;
    return 0;
}