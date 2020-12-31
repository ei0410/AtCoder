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

#define rep(i, n) for (ll i = 0; i < n; i++)

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    cin >> s;

    int a = s[0]*10+s[1] - '0'*10 - '0';
    int b = s[2]*10+s[3] - '0'*10 - '0';

    if (a > 12 || a == 0) {
        if (b > 12 || b == 0) {
            cout << "NA" << endl;
        } else {
            cout << "YYMM" << endl;
        }
    } else {
        if (b > 12 || b == 0) {
            cout << "MMYY" << endl;
        } else {
            cout << "AMBIGUOUS" << endl;
        }
    }
    return 0;
}