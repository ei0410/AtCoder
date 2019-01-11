#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    std::stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    /*
    //DFS
    while (!s.empty()) {
        int n = s.top();
        s.pop();
    }
    */

    std::cout << s.size() << std::endl;

    std::cout << s.top() << std::endl;
    s.pop();
    std::cout << s.top() << std::endl;
    s.pop();
    std::cout << s.top() << std::endl;
    s.pop();

    return 0;
}