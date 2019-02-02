#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int W, H, N;
    std::cin >> W >> H >> N;

    std::vector<int> x(N), y(N), a(N);
    for (int i = 0; i < N; i++) {
        std::cin >> x[i] >> y[i] >> a[i];
    }

    int xmax = 0;
    int xmin = W;
    int ymax = 0;
    int ymin = H;
    for (int i = 0; i < N; i++) {
        if (a[i] == 1) {
            if (xmax < x[i]) {
                xmax = x[i];
            }
        } else if (a[i] == 2) {
            if (xmin > x[i]) {
                xmin = x[i];
            }
        } else if (a[i] == 3) {
            if (ymax < y[i]) {
                ymax = y[i];
            }
        } else if (a[i] == 4) {
            if (ymin > y[i]) {
                ymin = y[i];
            }
        }
    }

    int ans = 0;
    if (xmin - xmax > 0 && ymin - ymax > 0) {
        ans = (xmin - xmax)*(ymin - ymax);
    }

    std::cout << ans << std::endl;
    return 0;
}