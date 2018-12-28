#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    std::string s;
    std::cin >> s;

    std::vector<int> a(s.size());
    for (int i = 0; i < s.size(); i++) {
        a[i] = stoi(s.substr(i, 1).c_str());
    }

    int bit = pow(2, s.size() - 1);
    for (int i = 0; i < bit; i++) {
        int ans = 0;
        ans += a[0];
        for (int j = 1; j < s.size(); j++) {
            if (i & (1 << (j-1))) {
                ans += a[j];
            } else {
                ans -= a[j];
            }
        }
        if (ans == 7) {
            for (int j = 0; j < s.size() - 1; j++) {
                std::cout << a[j];
                if (i & (1 << j)) {
                    std::cout << "+";
                } else {
                    std::cout << "-";
                }
            }
            std::cout << a[s.size()-1];
            std::cout << "=7" << std::endl;
            break;
        }
    }

    return 0;
}