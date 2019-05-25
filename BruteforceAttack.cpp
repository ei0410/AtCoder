#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int N;
void dfs(std::string s) {
    if (s.size() >= N) {
        std::cout << s << std::endl;
        return;
    }
    dfs(s + "a");
    dfs(s + "b");
    dfs(s + "c");
}
 
int main(int argc, char *argv[])
{
    std::cin >> N;

    dfs("");
    return 0;
}