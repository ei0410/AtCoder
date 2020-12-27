#include <bits/stdc++.h> 

using namespace std;

#define YES cout << "YES" << endl;
#define NO  cout << "NO"  << endl;
#define Yes cout << "Yes" << endl;
#define No  cout << "No"  << endl;
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;
 
int main(int argc, char *argv[])
{
    string str = "abcdefghijklmnopqrstuvwxyz";
    string str2("my string");

    str2 += " extended";

    cout << str.size() << endl;

    cout << str[0] << endl;
    cout << str.at(0) << endl;

    ll pos = str.find("abc");

    ll start_pos = 1;
    pos = str.find("xyz", start_pos);

    pos = str.rfind("abc");

    ll len = 3;
    str.substr(pos, len);
    str.substr(pos); // to last

    string s1 = str;
    string s2 = str;

    str.replace(pos, len, "...");
    str.insert(pos, "INSERT");
    str.erase(pos, len);
    str.erase(pos); // to last

    strcmp(s1.c_str(), s2.c_str());
    return 0;
}