#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    std::vector<int> x;
    x.push_back(11);
    x.push_back(7);
    x.push_back(3);
    x.push_back(4);
    x.push_back(8);

    std::vector<P> y;
    for (int i = 0; i < x.size(); i++) {
        y.push_back(P(x[i], i));
    }

    std::sort(y.begin(), y.end());
    for (std::vector<P>::iterator it = y.begin(); it != y.end(); ++it){
        std::cout << it->first << " " << it->second << std::endl;
    }

    return 0;
}