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

    int N;
    cin >> N;

    string S;
    cin >> S;

    int b = 0;
    int w = 0;
    int tmp = 1;
    if (S[0] == '.') {
        int i = 1;
        while (S[i] == '.') {
            tmp++;
            if (i == N-1) {
                break;
            }
            i++;
        }
        rep (i, N) {
            if (S[i] == '#') {
                b++;
            } else {
                w++;
            }
        }
        cout << min(b, w-tmp) << endl;
    } else {
        rep (i, N) {
            if (S[i] == '#') {
                b++;
            } else {
                w++;
            }
        }
        cout << min(b, w) << endl;
    }

    return 0;
}