#include <bits/stdc++.h> 

using namespace std;

#define YES cout << "YES" << endl;
#define NO  cout << "NO"  << endl;
#define Yes cout << "Yes" << endl;
#define No  cout << "No"  << endl;
 
#define INF INT_MAX
#define LLINF LLONG_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

struct Rect {
    ll height;
    ll pos;
};

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    vector<ll> A(N);
    rep (i, N) {
        cin >> A[i];
    }
    A.push_back(0);

    stack<Rect> s;
    ll ans = 0;
    rep (i, N+1) {
        Rect rect;
        rect.height = A[i];
        rect.pos = i;

        if (s.empty()) {
            s.push(rect);
        } else {
            if (s.top().height < rect.height) {
                s.push(rect);
            } else if (s.top().height > rect.height) {
                ll target = i;
                while (!s.empty() && s.top().height >= rect.height) {
                    Rect pre = s.top();
                    s.pop();
                    ll area = pre.height * (i - pre.pos);
                    ans = max(ans, area);
                    target = pre.pos;
                }
                rect.pos = target;
                s.push(rect);
            }
        }
    }

    cout << ans << endl;
    return 0;
}