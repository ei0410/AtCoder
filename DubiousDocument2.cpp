#include <bits/stdc++.h> 

using namespace std;

#define YES cout << "YES" << endl;
#define NO  cout << "NO"  << endl;
#define Yes cout << "Yes" << endl;
#define No  cout << "No"  << endl;
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string S, T;
    cin >> S >> T;

    string ans = "UNRESTORABLE";
    for (int i = 0; i < S.size()-T.size()+1; i++) {
        string tmp(S);
        for (int j = i; j < T.size()+i; j++) {
            if (S[j] == '?' || S[j] == T[j-i]) {
                tmp[j] = T[j-i];
                if (j == T.size()+i-1) {
                    for (int k = 0; k < S.size(); k++) {
                        if (tmp[k] == '?') {
                            tmp[k] = 'a';
                        }
                    }
                    ans = tmp;
                }
            } else {
                break;
            }
        }
    }

    cout << ans << endl;
    return 0;
}