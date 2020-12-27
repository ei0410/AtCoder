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

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, 1, 0, -1};

vector<string> field;
vector<string> fieldtmp;

void dfs(ll h, ll w) {
    fieldtmp[h][w] = 'x';

    rep (i, 4) {
        ll nexth = h+dx[i];
        ll nextw = w+dy[i];

        if (nexth < 0 || 9 < nexth || nextw < 0 || 9 < nextw || fieldtmp[nexth][nextw] == 'x') {
            continue;
        }

        dfs(nexth, nextw);
    }
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    field.resize(10);
    fieldtmp.resize(10);
    rep (i, 10) {
        cin >> field[i];
        fieldtmp[i] = field[i];
    }

    ll cnt = INF;
    rep (i, 10) {
        rep (j, 10) {
            ll cnttmp = 0;
            rep (k, 10) {
                fieldtmp[k] = field[k];
            }
            
            if (fieldtmp[i][j] == 'x') {
                fieldtmp[i][j] = 'o';
            }
            rep (k, 10) {
                rep (l, 10) {
                    if (fieldtmp[k][l] == 'x') {
                        continue;
                    }
                    dfs(k, l);
                    cnttmp++;
                }
            }
            cnt = min(cnt, cnttmp);
        }
    }

    if (cnt == 1) {
        YES;
    } else {
        NO;
    }
    return 0;
}