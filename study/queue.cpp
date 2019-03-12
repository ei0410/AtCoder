#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    std::queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    /*
    //BFS
    while (!q.empty()) {
        int n = q.front();
        q.pop();

        if (...) {
            q.push(...);
        }
    }
    */

    std::cout << q.size() << std::endl;

    std::cout << q.front() << std::endl;
    std::cout << q.back() << std::endl;
    q.pop();
    std::cout << q.front() << std::endl;
    std::cout << q.back() << std::endl;
    q.pop();
    std::cout << q.front() << std::endl;
    std::cout << q.back() << std::endl;
    q.pop();

    std::cout << std::boolalpha << q.empty() << std::endl;
    return 0;
}