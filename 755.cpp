#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;

ll count = 0;
ll N;

void dfs(ll depth, ll n) {
    if (n > N) {
        return;
    }

    ll tmp3 = n;
    bool tmp3flag = false;
    while(tmp3 > 0) {
        if (tmp3 % 10 == 3) {
            tmp3flag = true;
            break;
        }
        tmp3 /= 10;
    }
    ll tmp5 = n;
    bool tmp5flag = false;
    while(tmp5 > 0) {
        if (tmp5 % 10 == 5) {
            tmp5flag = true;
            break;
        }
        tmp5 /= 10;
    }
    ll tmp7 = n;
    bool tmp7flag = false;
    while(tmp7 > 0) {
        if (tmp7 % 10 == 7) {
            tmp7flag = true;
            break;
        }
        tmp7 /= 10;
    }

    if (tmp3flag && tmp5flag && tmp7flag) {
        count++;
    }
    if (depth == 0) {
        depth++;
        dfs(depth, 3);
        dfs(depth, 5);
        dfs(depth, 7);
    } else {
        dfs(depth+1, n+std::pow(10, depth)*3); 
        dfs(depth+1, n+std::pow(10, depth)*5); 
        dfs(depth+1, n+std::pow(10, depth)*7); 
    }
}
 
int main(int argc, char *argv[])
{
    std::cin >> N;

    dfs(0, 0);

    std::cout << count << std::endl;
    return 0;
}
