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

    string s;
    cin >> s;

    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            ans += '0';
        } else if (s[i] == '1') {
            ans += '1';
        } else {
            if (!ans.empty()) {
                ans.erase(ans.begin() + ans.size() - 1);
            }
        }
    }

    cout << ans << endl;
    return 0;
}