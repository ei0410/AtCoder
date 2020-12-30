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

using Field = vector<vector<ll>>;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

void rec(Field &field, vector<Field> &res) {
    ll emptyi = -1, emptyj = -1;
    for (ll i = 0; i < 9 && emptyi == -1; i++) {
        for (ll j = 0; j < 9 && emptyj == -1; j++) {
            if (field[i][j] == -1) {
                emptyi = i;
                emptyj = j;
                break;
            }
        }
    }

    if (emptyi == -1 || emptyj == -1) {
        res.push_back(field);
        return;
    }

    vector<bool> canuse(10, 1);
    rep (i, 9) {
        if (field[emptyi][i] != -1) {
            canuse[field[emptyi][i]] = false;
        }
        if (field[i][emptyj] != -1) {
            canuse[field[i][emptyj]] = false;
        }

        ll bi = emptyi/3*3+1, bj = emptyj/3*3+1;
        for (ll di = bi-1; di <= bi+1; di++) {
            for (ll dj = bj-1; dj <= bj+1; dj++) {
                if (field[di][dj] != -1) {
                    canuse[field[di][dj]] = false;
                }
            }
        }
    }

    for (ll v = 1; v <= 9; v++) {
        if (!canuse[v]) {
            continue;
        }
        field[emptyi][emptyj] = v;
        rec(field, res);
    }

    field[emptyi][emptyj] = -1;
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    Field field(9, vector<ll>(9, -1));
    rep (i, 9) {
        string line;
        cin >> line;
        rep (j, 9) {
            if (line[j] == '*') {
                continue;
            }
            ll num = line[j] - '0';
            field[i][j] = num;
        }
    }

    vector<Field> res;
    rec(field, res);

    if (res.size() == 0) {
        cout << "no solutions." << endl;
    } else if (res.size() > 1) {
        cout << "more than one solutions." << endl;
    } else {
        Field ans = res[0];
        rep (i, 9) {
            rep (j, 9) {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}