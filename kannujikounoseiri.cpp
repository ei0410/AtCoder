#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<std::string> s(N);
    for (int i = 0; i < N; i++) {
        std::cin >> s[i];
    }

    std::vector<int> S(N), E(N);
    for (int i = 0; i < N; i++) {
        S[i] = std::stoi(s[i].substr(0, 4));
        E[i] = std::stoi(s[i].substr(5, 4));
    }

    for (int i = 0; i < N; i++) {
        if (S[i] % 10 < 5) {
            S[i] = (S[i] / 10) * 10;
        } else {
            S[i] = (S[i] / 10) * 10 + 5;
        }

        if (E[i] % 10 == 0) {
            ;
        } else if (E[i] % 10 <= 5) {
            E[i] = (E[i] / 10) * 10 + 5;
        } else {
            E[i] = (E[i] / 10) * 10 + 10;
            if (E[i] % 100 == 60) {
                E[i] += 40;
            }
        }
    }

    std::sort(S.begin(), S.end());
    std::sort(E.begin(), E.end());

    std::vector<int> anss, anse;
    anss.push_back(S[0]);
    for (int i = 0; i < N-1; i++) {
        if (E[i] < S[i+1]) {
            anss.push_back(S[i+1]);
            anse.push_back(E[i]);
        }
    }
    anse.push_back(E[N-1]);

    for (int i = 0; i < anss.size(); i++) {
        std::cout << std::setfill('0') << std::right << std::setw(4) << anss[i] << "-" << std::setfill('0') << std::right << std::setw(4) << anse[i] << std::endl;
    }
    return 0;
}
