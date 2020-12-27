#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<int> a(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }

    int max = 0;
    int min = 0;

    std::set<int> s;

    int cnt = 0;
    for (int i = 0; i < N; i++) {
        int temp = 0;
        if (a[i] < 400) {
            temp = 1;
        } else if (a[i] < 800) {
            temp = 2;
        } else if (a[i] < 1200) {
            temp = 3;
        } else if (a[i] < 1600) {
            temp = 4;
        } else if (a[i] < 2000) {
            temp = 5;
        } else if (a[i] < 2400) {
            temp = 6;
        } else if (a[i] < 2800) {
            temp = 7;
        } else if (a[i] < 3200) {
            temp = 8;
        } else {
            cnt++;
            continue;
        }
        s.insert(temp);
    }

    bool flag = true;
    for (int i = 0; i < N; i++) {
        if (a[i] < 3200) {
            break;
        }
        if (i == N-1) {
            flag = false;
        }
    }

    if (flag) {
        min = s.size();
        max = s.size() + cnt;
    } else {
        min = 1;
        max = cnt;
    }

    std::cout << min << " " << max << std::endl;
    return 0;
}