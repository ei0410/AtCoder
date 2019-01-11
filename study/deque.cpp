#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    std::deque<int> dq;

    dq.push_back(0);
    dq.back();
    dq.pop_back();

    dq.push_front(0);
    dq.front();
    dq.pop_front();
    
    dq.size();
    dq.clear();
    dq.empty();

    return 0;
}