#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    std::priority_queue<int> pq;
    // std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

    pq.push(3);
    pq.push(1);
    pq.push(2);

    while(!pq.empty()) {
        std::cout << pq.top() << " " << std::flush;
        pq.pop();
    }
    std::cout << std::endl;
    return 0;
}