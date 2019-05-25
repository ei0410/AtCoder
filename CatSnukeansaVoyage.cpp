#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N, M;
    std::cin >> N >> M;

    std::vector<int> a(M);
    std::vector<int> b(M);

    for (int i = 0; i < M; i++) {
        std::cin >> a[i] >> b[i];
    }

    /*
    std::vector<int> a1;
    for (int i = 0; i < M; i++) {
        if (a[i] == 1) {
            a1.push_back(b[i]);
        }
    }

    std::vector<int> bN;
    for (int i = 0; i < M; i++) {
        if (b[i] == N) {
            bN.push_back(a[i]);
        }
    }

    bool flag = false;
    bool flag2 = false;
    for (int i = 0; i < a1.size(); i++) {
        for (int j = 0; j < bN.size(); j++) {
            if (a1[i] == bN[j]) {
                flag = true;
                break;
            }
        }
        if (flag2) {
            break;
        }
    }
    */

    bool flag = false;
    std::set<int> s;
    for (int i = 0; i < M; i++) {
        if (b[i] == N) {
            s.insert(a[i]);
        }
    }
    for (int i = 0; i < M; i++) {
        if (a[i] == 1) {
            auto it = s.find(b[i]);
            if (it != s.end()) {
                flag = true;
                break;
            }
        }
    }

    if (flag) {
        std::cout << "POSSIBLE" << std::endl;
    } else {
        std::cout << "IMPOSSIBLE" << std::endl;
    }
    return 0;
}