#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    std::string S, T;
    std::cin >> S >> T;

    bool flag = true;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] != T[i]) {
            if (S[i] == '@') {
                if (T[i] == 'a' || T[i] == 't' || T[i] == 'c' || T[i] == 'o' || T[i] == 'd' || T[i] == 'e' || T[i] == 'r' || T[i] == '@' ) {
                    ;
                } else {
                    flag = false;
                }
            } else if (T[i] == '@') {
                if (S[i] == 'a' || S[i] == 't' || S[i] == 'c' || S[i] == 'o' || S[i] == 'd' || S[i] == 'e' || S[i] == 'r' || S[i] == '@' ) {
                    ;
                } else {
                    flag = false;
                }
            } else{
                flag = false;
            }
        }
    }

    if (flag) {
        std::cout << "You can win"   << std::endl;
    } else {
        std::cout << "You will lose" << std::endl;
    }
    return 0;
}
