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
int qu[MAX];

int tail = 0;
int head = 0;

void init() {
    head = tail = 0;
}

bool isEmpty() {
    return (head == tail);
}

bool isFull() {
    return (head == (tail+1)%MAX);
}

void enqueue(int v) {
    if (isFull()) {
        cout << "queue is Full." << endl;
        return;
    }
    qu[tail++] = v;
    if (tail == MAX) {
        tail = 0;
    }
}

int dequeue() {
    if (isEmpty()) {
        cout << "queue is empty." << endl;
        return -1;
    }
    int res = qu[head];
    ++head;
    if (head == MAX) {
        head = 0;
    }
    return res;
}

int size() {
    return tail - head;
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    init();

    enqueue(3);
    enqueue(5);
    enqueue(6);

    cout << dequeue() << endl;
    cout << size() << endl;
    cout << dequeue() << endl;
    cout << size() << endl;

    enqueue(9);
    enqueue(11);

    dequeue();
    dequeue();
    dequeue();

    cout << (isEmpty() ? "empty" : "not empty") << endl;
    return 0;
}