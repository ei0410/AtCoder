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

struct Heap {
    vector<int> heap;
    Hea() {}

    void push(int v) {
        heap.push_back(v);
        int i = (int)heap_size() - 1;
        while (i > 0) {
            int p = (i-1)/2;
            if (heap[p] >= v) {
                break;
            }
            heap[i] = heap[p];
            i = p;
        }
        heap[i] = v;
    }

    int top() {
        if (!heap.empty()) {
            return heap[0];
        } else {
            return -1;
        }
    }

    void pop() {
        if (heap.empty()) {
            return;
        }

        int v = heap.back();
        heap.pop_back();
        int i = 0;

        while (i*2 + 1 < (int)heap.size()) {
            int child1 = i*2+1, child2 = i*2+2;
            if (child2 < (int)heap.size() && heap[child2] > heap[child1]) {
                child1 = child2;
            }
            if (heap[child1] <= v) {
                break;
            }
            heap[i] = heap[child1];
            i = child1;
        }
        heap[i] = v;
    }
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    return 0;
}