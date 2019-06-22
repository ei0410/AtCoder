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

vector<ll> a = {1, 14, 32, 51, 51, 243, 419, 750, 910};

bool isOK(ll index, ll key) {
    if (a[index] >= key) {
        return true;
    } else {
        return false;
    }
}

ll binary_search(ll key) {
    ll ng = -1;
    ll ok = (ll)a.size();

    while (abs(ok - ng) > 1) {
        ll mid = (ok + ng) / 2;

        if (isOK(mid, key)) {
            ok = mid;
        } else {
            ng = mid;
        }
    }

    return ok;
}
 
int main(int argc, char *argv[])
{
    cout << binary_search(51) << endl;
    cout << binary_search(1) << endl;
    cout << binary_search(910) << endl;

    cout << binary_search(52) << endl;
    cout << binary_search(0) << endl;
    cout << binary_search(911) << endl;
    return 0;
}