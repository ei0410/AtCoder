#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    int N, K;
    int l;
    //vector<int> v;
    int v[100];

    cin >> N >> K;

    int i = 0;
    while(cin >> l) {
        v[i] = l;
        i++;
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        if ((K - v[i]) <= v[i]) {
            sum += (K - v[i]) * 2;
        } else {
            sum += v[i] * 2;
        }
    }

    cout << sum;

    return 0;
}