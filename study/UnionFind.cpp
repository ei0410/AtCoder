#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;

#define MAX_N 100010
#define MAX_Q 200010

int N, Q;
int P[MAX_Q], A[MAX_Q], B[MAX_Q], parent[MAX_N];

void init(int n) {
    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }
}

int root(int x) {
    if (parent[x] == x) {
        return x;
    } else {
        return parent[x] = root(parent[x]);
    }
}

bool same(int x, int y) {
    return root(x) == root(y);
}

void unite(int x, int y) {
    x = root(x);
    y = root(y);

    if (x == y) {
        return;
    }

    parent[x] = y;
}
 
int main(int argc, char *argv[])
{
    std::cin >> N >> Q;

    for (int i = 0; i < Q; i++) {
        std::cin >> P[i] >> A[i] >> B[i];
    }

    init(N);

    for (int i = 0; i < Q; i++) {
        if (P[i]) {
            if (same(A[i], B[i])) {
                std::cout << "Yes" << std::endl;
            } else {
                std::cout << "No"  << std::endl;
            }
        } else {
            unite(A[i], B[i]);
        }
    }
    return 0;
}