#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    std::string str = "abcdefghijklmnopqrstuvwxyz";

    int pos = str.find("abc");

    int start_pos = 1;
    pos = str.find("xyz", start_pos);

    pos = str.rfind("abc");

    int len = 3;
    str.substr(pos, len);
    str.substr(pos); // to last

    std::string s1 = str;
    std::string s2 = str;

    str.replace(pos, len, "...");
    str.insert(pos, "INSERT");
    str.erase(pos, len);
    str.erase(pos); // to last

    strcmp(s1.c_str(), s2.c_str());

    return 0;
}