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

    int N;
    cin >> N;

    vector<int> A(N+2, 0);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    vector<int> S(N+1);
    for (int i = 0; i <= N; i++) {
        S[i] = abs(A[i+1] - A[i]);
    }

    int sum = 0;
    for (int i = 0; i <= N; i++) {
        sum += S[i];
    }
    
    for (int i = 1; i <= N; i++) {
        cout << sum + abs(A[i-1] - A[i+1]) - (abs(A[i-1] - A[i]) + abs(A[i] - A[i+1]))<< endl;        
    }
    return 0;
}