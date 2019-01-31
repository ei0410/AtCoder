#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int H, W;
    std::cin >> H >> W;

    ll ans = INF;
    for (int i = 1; i < H; i++) {
        ll p1 = i * W;
        ll p2 = (H-i) * W/2;
        ll p3 = (H-i) * (W/2 + W%2);

        ll first  = std::abs(p1 - p2);
        ll second = std::abs(p2 - p3);
        ll third  = std::abs(p3 - p1);

        ll temp = std::max(first, std::max(second, third));
        if (ans > temp) {
            ans = temp;
        }
    }

    for (int i = 1; i < W; i++) {
        ll p1 = i * H;
        ll p2 = (W-i) * H/2;
        ll p3 = (W-i) * (H/2 + H%2);

        ll first  = std::abs(p1 - p2);
        ll second = std::abs(p2 - p3);
        ll third  = std::abs(p3 - p1);

        ll temp = std::max(first, std::max(second, third));
        if (ans > temp) {
            ans = temp;
        }
    }

    for (int i = 1; i < H; i++) {
        ll p1 = i * W;
        ll p2 = (H-i)/2 * W;
        ll p3 = ((H-i)/2 + (H-i)%2) * W; 

        ll first  = std::abs(p1 - p2);
        ll second = std::abs(p2 - p3);
        ll third  = std::abs(p3 - p1);

        ll temp = std::max(first, std::max(second, third));
        if (ans > temp) {
            ans = temp;
        }
    }

    for (int i = 1; i < W; i++) {
        ll p1 = i * H;
        ll p2 = (W-i)/2 * H;
        ll p3 = ((W-i)/2 + (W-i)%2) * H; 

        ll first  = std::abs(p1 - p2);
        ll second = std::abs(p2 - p3);
        ll third  = std::abs(p3 - p1);

        ll temp = std::max(first, std::max(second, third));
        if (ans > temp) {
            ans = temp;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}