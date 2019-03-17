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

    int N, K;
    cin >> N >> K;

    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }

    int ans = INF;
    for (int i = 0; i < N-K+1; i++) {
        int sum = 0;
        if (x[i] < 0 && x[K+i-1] <= 0) {
            sum += abs(x[i]);
        } else if (x[i] < 0 && x[K+i-1] > 0) {
            sum += abs(x[i]);
            sum += abs(x[K+i-1] - x[i]);
        } else if (x[i] > 0 && x[K+i-1] > 0) {
            sum += abs(x[K+i-1]);
        }

        ans = min(ans, sum);
    }

    reverse(x.begin(), x.end());
    for (int i = 0; i < x.size(); i++) {
        x[i] = -x[i];
    }

    for (int i = 0; i < N-K+1; i++) {
        int sum = 0;
        if (x[i] < 0 && x[K+i-1] <= 0) {
            sum += abs(x[i]);
        } else if (x[i] < 0 && x[K+i-1] > 0) {
            sum += abs(x[i]);
            sum += abs(x[K+i-1] - x[i]);
        } else if (x[i] > 0 && x[K+i-1] > 0) {
            sum += abs(x[K+i-1]);
        }

        ans = min(ans, sum);
    }

    cout << ans << endl;
    return 0;
}