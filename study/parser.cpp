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

template<class T> struct Parser {
    int root;
    vector<T> vals;
    vector<char> ops;
    vector<int> left, right;
    vector<int> ids;
    int ind = 0;

    void init() {
        vals.clear();
        ops.clear();
        left.clear();
        right.clear();
        ids.clear();
        ind = 0;
    }

    int newnode(char op, int lp, int rp, T val = 0) {
        ops.push_back(op);
        left.push_back(lp);
        right.push_back(rp);

        if (op == 'a') {
            vals.push_back(val);
            ids.push_back(ind++);
        } else {
            if (op == '+') {
                vals.push_back(vals[lp] + vals[rp]);
            } else if (op == '-') {
                vals.push_back(vals[lp] - vals[rp]);
            } else if (op == '*') {
                vals.push_back(vals[lp] * vals[rp]);
            } else if (op == '/') {
                vals.push_back(vals[lp] / vals[rp]);
            }
            ids.push_back(-1);
        }
        return (int)vals.size() - 1;
    }

    T solve(const string &S) {
        int p = 0;
        string nS = "";
        for (auto c : S) {
            if (c != ' ') {
                nS += c;
            }
        }

        root = expr(nS, p);
        return vals[root];
    }

    int expr(const string &S, int &p) {
        int lp = factor(S, p);
        while (p < (int)S.size() && (S[p] == '+' || S[p] == '-')) {
            char op = S[p];
            ++p;
            int rp = factor(S, p);
            lp = newnode(op, lp, rp);
        }
        return lp;
    }

    int factor(const string &S, int &p) {
        int lp = value(S, p);
        while (p < (int)S.size() && (S[p] == '*' || S[p] == '/')) {
            char op = S[p];
            ++p;
            int rp = value(S, p);
            lp = newnode(op, lp, rp);
        }
        return lp;
    }

    int value(const string &S, int &p) {
        if (S[p] == '(') {
            ++p;
            int lp = expr(S, p);
            ++p;
            return lp;
        } else {
            T val = 0;
            int sign = 1;
            if (p < (int)S.size() && S[p] == '-') {
                sign = -1;
            }

            while (p < (int)S.size() && S[p] >= '0' && S[p] <= '9') {
                val = val * 10 + (int)(S[p] - '0');
                ++p;
            }
            return newnode('a', -1, -1, val);
        }
    }
};

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    Parser<int> parse;
    cout << parse.solve("6 + 3") << endl;
    cout << parse.solve("3 + (10 - 4) / 2") << endl;
    cout << parse.solve("((6 - 3) * 2 + 10 / 5) * (-3)") << endl;

    return 0;
}