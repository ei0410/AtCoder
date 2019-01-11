#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

std::vector<std::string> split(std::string s, std::string delim) {
    std::vector<std::string> res;
    int pos = 0;
    while (true) {
        int found = s.find(delim, pos);
        if (found >= 0) {
            res.push_back(s.substr(pos, found - pos));
        } else {
            res.push_back(s.substr(pos));
            break;
        }
        pos = found + delim.size();
    }
    return res;
}
 
int main(int argc, char *argv[])
{
    return 0;
}