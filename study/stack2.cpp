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

const int MAX = 10000;

int st[MAX];
int top = 0;

void init() {
    top = 0;
}

bool isEmpty() {
    return (top == 0);
}

bool isFull() {
    return (top == MAX);
}

void push(int v) {
    if (isFull()) {
        cout << "stack is full." << endl;
        return;
    }
    st[top++] = v;
}

int pop() {
    if (isEmpty()) {
        cout << "stack is empty." << endl;
        return -1;
    }
    return st[--top];
}

int size() {
    return top;
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    init();

    push(3);
    push(5);
    push(6);

    cout << pop() << endl;
    cout << size() << endl;
    cout << pop() << endl;
    cout << size() << endl;

    push(9);
    push(11);

    pop();
    pop();
    pop();

    cout << (isEmpty() ? "empty" : "not empty") << endl;
    return 0;
}