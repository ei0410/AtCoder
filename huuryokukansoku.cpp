#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    double deg, dis;
    std::cin >> deg >> dis;

    std::string dir;
    double kaze = std::round((deg / 10) * 100) / 100;
    double W    = std::round((dis / 60) * 10) / 10;

    if (W <= 0.2) {
        dir = "C";
        W = 0;
    } else if (W >= 0.3 && W <= 1.5) {
        if (kaze >= 11.25 && kaze < 33.75) {
            dir = "NNE";
        } else if (kaze >= 33.75 && kaze < 56.25) {
            dir = "NE";
        } else if (kaze >= 56.25 && kaze < 78.75) {
            dir = "ENE";
        } else if (kaze >= 78.75 && kaze < 101.25) {
            dir = "E";
        } else if (kaze >= 101.25 && kaze < 123.75) {
            dir = "ESE";
        } else if (kaze >= 123.75 && kaze < 146.25) {
            dir = "SE";
        } else if (kaze >= 146.25 && kaze < 168.75) {
            dir = "SSE";
        } else if (kaze >= 168.75 && kaze < 191.25) {
            dir = "S";
        } else if (kaze >= 191.25 && kaze < 213.75) {
            dir = "SSW";
        } else if (kaze >= 213.75 && kaze < 236.25) {
            dir = "SW";
        } else if (kaze >= 236.25 && kaze < 258.75) {
            dir = "WSW";
        } else if (kaze >= 258.75 && kaze < 281.25) {
            dir = "W";
        } else if (kaze >= 281.25 && kaze < 303.75) {
            dir = "WNW";
        } else if (kaze >= 303.75 && kaze < 326.25) {
            dir = "NW";
        } else if (kaze >= 326.25 && kaze < 348.75) {
            dir = "NNW";
        } else {
            dir = "N";
        }
        W = 1;
    } else if (W >= 1.6 && W <= 3.3) {
        if (kaze >= 11.25 && kaze < 33.75) {
            dir = "NNE";
        } else if (kaze >= 33.75 && kaze < 56.25) {
            dir = "NE";
        } else if (kaze >= 56.25 && kaze < 78.75) {
            dir = "ENE";
        } else if (kaze >= 78.75 && kaze < 101.25) {
            dir = "E";
        } else if (kaze >= 101.25 && kaze < 123.75) {
            dir = "ESE";
        } else if (kaze >= 123.75 && kaze < 146.25) {
            dir = "SE";
        } else if (kaze >= 146.25 && kaze < 168.75) {
            dir = "SSE";
        } else if (kaze >= 168.75 && kaze < 191.25) {
            dir = "S";
        } else if (kaze >= 191.25 && kaze < 213.75) {
            dir = "SSW";
        } else if (kaze >= 213.75 && kaze < 236.25) {
            dir = "SW";
        } else if (kaze >= 236.25 && kaze < 258.75) {
            dir = "WSW";
        } else if (kaze >= 258.75 && kaze < 281.25) {
            dir = "W";
        } else if (kaze >= 281.25 && kaze < 303.75) {
            dir = "WNW";
        } else if (kaze >= 303.75 && kaze < 326.25) {
            dir = "NW";
        } else if (kaze >= 326.25 && kaze < 348.75) {
            dir = "NNW";
        } else {
            dir = "N";
        }
        W = 2;
    } else if (W >= 3.4 && W <= 5.4) {
        if (kaze >= 11.25 && kaze < 33.75) {
            dir = "NNE";
        } else if (kaze >= 33.75 && kaze < 56.25) {
            dir = "NE";
        } else if (kaze >= 56.25 && kaze < 78.75) {
            dir = "ENE";
        } else if (kaze >= 78.75 && kaze < 101.25) {
            dir = "E";
        } else if (kaze >= 101.25 && kaze < 123.75) {
            dir = "ESE";
        } else if (kaze >= 123.75 && kaze < 146.25) {
            dir = "SE";
        } else if (kaze >= 146.25 && kaze < 168.75) {
            dir = "SSE";
        } else if (kaze >= 168.75 && kaze < 191.25) {
            dir = "S";
        } else if (kaze >= 191.25 && kaze < 213.75) {
            dir = "SSW";
        } else if (kaze >= 213.75 && kaze < 236.25) {
            dir = "SW";
        } else if (kaze >= 236.25 && kaze < 258.75) {
            dir = "WSW";
        } else if (kaze >= 258.75 && kaze < 281.25) {
            dir = "W";
        } else if (kaze >= 281.25 && kaze < 303.75) {
            dir = "WNW";
        } else if (kaze >= 303.75 && kaze < 326.25) {
            dir = "NW";
        } else if (kaze >= 326.25 && kaze < 348.75) {
            dir = "NNW";
        } else {
            dir = "N";
        }
        W = 3;
    } else if (W >= 5.5 && W <= 7.9) {
        if (kaze >= 11.25 && kaze < 33.75) {
            dir = "NNE";
        } else if (kaze >= 33.75 && kaze < 56.25) {
            dir = "NE";
        } else if (kaze >= 56.25 && kaze < 78.75) {
            dir = "ENE";
        } else if (kaze >= 78.75 && kaze < 101.25) {
            dir = "E";
        } else if (kaze >= 101.25 && kaze < 123.75) {
            dir = "ESE";
        } else if (kaze >= 123.75 && kaze < 146.25) {
            dir = "SE";
        } else if (kaze >= 146.25 && kaze < 168.75) {
            dir = "SSE";
        } else if (kaze >= 168.75 && kaze < 191.25) {
            dir = "S";
        } else if (kaze >= 191.25 && kaze < 213.75) {
            dir = "SSW";
        } else if (kaze >= 213.75 && kaze < 236.25) {
            dir = "SW";
        } else if (kaze >= 236.25 && kaze < 258.75) {
            dir = "WSW";
        } else if (kaze >= 258.75 && kaze < 281.25) {
            dir = "W";
        } else if (kaze >= 281.25 && kaze < 303.75) {
            dir = "WNW";
        } else if (kaze >= 303.75 && kaze < 326.25) {
            dir = "NW";
        } else if (kaze >= 326.25 && kaze < 348.75) {
            dir = "NNW";
        } else {
            dir = "N";
        }
        W = 4;
    } else if (W >= 8.0 && W <= 10.7) {
        if (kaze >= 11.25 && kaze < 33.75) {
            dir = "NNE";
        } else if (kaze >= 33.75 && kaze < 56.25) {
            dir = "NE";
        } else if (kaze >= 56.25 && kaze < 78.75) {
            dir = "ENE";
        } else if (kaze >= 78.75 && kaze < 101.25) {
            dir = "E";
        } else if (kaze >= 101.25 && kaze < 123.75) {
            dir = "ESE";
        } else if (kaze >= 123.75 && kaze < 146.25) {
            dir = "SE";
        } else if (kaze >= 146.25 && kaze < 168.75) {
            dir = "SSE";
        } else if (kaze >= 168.75 && kaze < 191.25) {
            dir = "S";
        } else if (kaze >= 191.25 && kaze < 213.75) {
            dir = "SSW";
        } else if (kaze >= 213.75 && kaze < 236.25) {
            dir = "SW";
        } else if (kaze >= 236.25 && kaze < 258.75) {
            dir = "WSW";
        } else if (kaze >= 258.75 && kaze < 281.25) {
            dir = "W";
        } else if (kaze >= 281.25 && kaze < 303.75) {
            dir = "WNW";
        } else if (kaze >= 303.75 && kaze < 326.25) {
            dir = "NW";
        } else if (kaze >= 326.25 && kaze < 348.75) {
            dir = "NNW";
        } else {
            dir = "N";
        }
        W = 5;
    } else if (W >= 10.8 && W <= 13.8) {
        if (kaze >= 11.25 && kaze < 33.75) {
            dir = "NNE";
        } else if (kaze >= 33.75 && kaze < 56.25) {
            dir = "NE";
        } else if (kaze >= 56.25 && kaze < 78.75) {
            dir = "ENE";
        } else if (kaze >= 78.75 && kaze < 101.25) {
            dir = "E";
        } else if (kaze >= 101.25 && kaze < 123.75) {
            dir = "ESE";
        } else if (kaze >= 123.75 && kaze < 146.25) {
            dir = "SE";
        } else if (kaze >= 146.25 && kaze < 168.75) {
            dir = "SSE";
        } else if (kaze >= 168.75 && kaze < 191.25) {
            dir = "S";
        } else if (kaze >= 191.25 && kaze < 213.75) {
            dir = "SSW";
        } else if (kaze >= 213.75 && kaze < 236.25) {
            dir = "SW";
        } else if (kaze >= 236.25 && kaze < 258.75) {
            dir = "WSW";
        } else if (kaze >= 258.75 && kaze < 281.25) {
            dir = "W";
        } else if (kaze >= 281.25 && kaze < 303.75) {
            dir = "WNW";
        } else if (kaze >= 303.75 && kaze < 326.25) {
            dir = "NW";
        } else if (kaze >= 326.25 && kaze < 348.75) {
            dir = "NNW";
        } else {
            dir = "N";
        }
        W = 6;
    } else if (W >= 13.9 && W <= 17.1) {
        if (kaze >= 11.25 && kaze < 33.75) {
            dir = "NNE";
        } else if (kaze >= 33.75 && kaze < 56.25) {
            dir = "NE";
        } else if (kaze >= 56.25 && kaze < 78.75) {
            dir = "ENE";
        } else if (kaze >= 78.75 && kaze < 101.25) {
            dir = "E";
        } else if (kaze >= 101.25 && kaze < 123.75) {
            dir = "ESE";
        } else if (kaze >= 123.75 && kaze < 146.25) {
            dir = "SE";
        } else if (kaze >= 146.25 && kaze < 168.75) {
            dir = "SSE";
        } else if (kaze >= 168.75 && kaze < 191.25) {
            dir = "S";
        } else if (kaze >= 191.25 && kaze < 213.75) {
            dir = "SSW";
        } else if (kaze >= 213.75 && kaze < 236.25) {
            dir = "SW";
        } else if (kaze >= 236.25 && kaze < 258.75) {
            dir = "WSW";
        } else if (kaze >= 258.75 && kaze < 281.25) {
            dir = "W";
        } else if (kaze >= 281.25 && kaze < 303.75) {
            dir = "WNW";
        } else if (kaze >= 303.75 && kaze < 326.25) {
            dir = "NW";
        } else if (kaze >= 326.25 && kaze < 348.75) {
            dir = "NNW";
        } else {
            dir = "N";
        }
        W = 7;
    } else if (W >= 17.2 && W <= 20.7) {
        if (kaze >= 11.25 && kaze < 33.75) {
            dir = "NNE";
        } else if (kaze >= 33.75 && kaze < 56.25) {
            dir = "NE";
        } else if (kaze >= 56.25 && kaze < 78.75) {
            dir = "ENE";
        } else if (kaze >= 78.75 && kaze < 101.25) {
            dir = "E";
        } else if (kaze >= 101.25 && kaze < 123.75) {
            dir = "ESE";
        } else if (kaze >= 123.75 && kaze < 146.25) {
            dir = "SE";
        } else if (kaze >= 146.25 && kaze < 168.75) {
            dir = "SSE";
        } else if (kaze >= 168.75 && kaze < 191.25) {
            dir = "S";
        } else if (kaze >= 191.25 && kaze < 213.75) {
            dir = "SSW";
        } else if (kaze >= 213.75 && kaze < 236.25) {
            dir = "SW";
        } else if (kaze >= 236.25 && kaze < 258.75) {
            dir = "WSW";
        } else if (kaze >= 258.75 && kaze < 281.25) {
            dir = "W";
        } else if (kaze >= 281.25 && kaze < 303.75) {
            dir = "WNW";
        } else if (kaze >= 303.75 && kaze < 326.25) {
            dir = "NW";
        } else if (kaze >= 326.25 && kaze < 348.75) {
            dir = "NNW";
        } else {
            dir = "N";
        }
        W = 8;
    } else if (W >= 20.8 && W <= 24.4) {
        if (kaze >= 11.25 && kaze < 33.75) {
            dir = "NNE";
        } else if (kaze >= 33.75 && kaze < 56.25) {
            dir = "NE";
        } else if (kaze >= 56.25 && kaze < 78.75) {
            dir = "ENE";
        } else if (kaze >= 78.75 && kaze < 101.25) {
            dir = "E";
        } else if (kaze >= 101.25 && kaze < 123.75) {
            dir = "ESE";
        } else if (kaze >= 123.75 && kaze < 146.25) {
            dir = "SE";
        } else if (kaze >= 146.25 && kaze < 168.75) {
            dir = "SSE";
        } else if (kaze >= 168.75 && kaze < 191.25) {
            dir = "S";
        } else if (kaze >= 191.25 && kaze < 213.75) {
            dir = "SSW";
        } else if (kaze >= 213.75 && kaze < 236.25) {
            dir = "SW";
        } else if (kaze >= 236.25 && kaze < 258.75) {
            dir = "WSW";
        } else if (kaze >= 258.75 && kaze < 281.25) {
            dir = "W";
        } else if (kaze >= 281.25 && kaze < 303.75) {
            dir = "WNW";
        } else if (kaze >= 303.75 && kaze < 326.25) {
            dir = "NW";
        } else if (kaze >= 326.25 && kaze < 348.75) {
            dir = "NNW";
        } else {
            dir = "N";
        }
        W = 9;
    } else if (W >= 24.5 && W <= 28.4) {
        if (kaze >= 11.25 && kaze < 33.75) {
            dir = "NNE";
        } else if (kaze >= 33.75 && kaze < 56.25) {
            dir = "NE";
        } else if (kaze >= 56.25 && kaze < 78.75) {
            dir = "ENE";
        } else if (kaze >= 78.75 && kaze < 101.25) {
            dir = "E";
        } else if (kaze >= 101.25 && kaze < 123.75) {
            dir = "ESE";
        } else if (kaze >= 123.75 && kaze < 146.25) {
            dir = "SE";
        } else if (kaze >= 146.25 && kaze < 168.75) {
            dir = "SSE";
        } else if (kaze >= 168.75 && kaze < 191.25) {
            dir = "S";
        } else if (kaze >= 191.25 && kaze < 213.75) {
            dir = "SSW";
        } else if (kaze >= 213.75 && kaze < 236.25) {
            dir = "SW";
        } else if (kaze >= 236.25 && kaze < 258.75) {
            dir = "WSW";
        } else if (kaze >= 258.75 && kaze < 281.25) {
            dir = "W";
        } else if (kaze >= 281.25 && kaze < 303.75) {
            dir = "WNW";
        } else if (kaze >= 303.75 && kaze < 326.25) {
            dir = "NW";
        } else if (kaze >= 326.25 && kaze < 348.75) {
            dir = "NNW";
        } else {
            dir = "N";
        }
        W = 10;
    } else if (W >= 28.5 && W <= 32.6) {
        if (kaze >= 11.25 && kaze < 33.75) {
            dir = "NNE";
        } else if (kaze >= 33.75 && kaze < 56.25) {
            dir = "NE";
        } else if (kaze >= 56.25 && kaze < 78.75) {
            dir = "ENE";
        } else if (kaze >= 78.75 && kaze < 101.25) {
            dir = "E";
        } else if (kaze >= 101.25 && kaze < 123.75) {
            dir = "ESE";
        } else if (kaze >= 123.75 && kaze < 146.25) {
            dir = "SE";
        } else if (kaze >= 146.25 && kaze < 168.75) {
            dir = "SSE";
        } else if (kaze >= 168.75 && kaze < 191.25) {
            dir = "S";
        } else if (kaze >= 191.25 && kaze < 213.75) {
            dir = "SSW";
        } else if (kaze >= 213.75 && kaze < 236.25) {
            dir = "SW";
        } else if (kaze >= 236.25 && kaze < 258.75) {
            dir = "WSW";
        } else if (kaze >= 258.75 && kaze < 281.25) {
            dir = "W";
        } else if (kaze >= 281.25 && kaze < 303.75) {
            dir = "WNW";
        } else if (kaze >= 303.75 && kaze < 326.25) {
            dir = "NW";
        } else if (kaze >= 326.25 && kaze < 348.75) {
            dir = "NNW";
        } else {
            dir = "N";
        }
        W = 11;
    } else if (W >= 32.7) {
        if (kaze >= 11.25 && kaze < 33.75) {
            dir = "NNE";
        } else if (kaze >= 33.75 && kaze < 56.25) {
            dir = "NE";
        } else if (kaze >= 56.25 && kaze < 78.75) {
            dir = "ENE";
        } else if (kaze >= 78.75 && kaze < 101.25) {
            dir = "E";
        } else if (kaze >= 101.25 && kaze < 123.75) {
            dir = "ESE";
        } else if (kaze >= 123.75 && kaze < 146.25) {
            dir = "SE";
        } else if (kaze >= 146.25 && kaze < 168.75) {
            dir = "SSE";
        } else if (kaze >= 168.75 && kaze < 191.25) {
            dir = "S";
        } else if (kaze >= 191.25 && kaze < 213.75) {
            dir = "SSW";
        } else if (kaze >= 213.75 && kaze < 236.25) {
            dir = "SW";
        } else if (kaze >= 236.25 && kaze < 258.75) {
            dir = "WSW";
        } else if (kaze >= 258.75 && kaze < 281.25) {
            dir = "W";
        } else if (kaze >= 281.25 && kaze < 303.75) {
            dir = "WNW";
        } else if (kaze >= 303.75 && kaze < 326.25) {
            dir = "NW";
        } else if (kaze >= 326.25 && kaze < 348.75) {
            dir = "NNW";
        } else {
            dir = "N";
        }
        W = 12;
    }

    std::cout << dir << " " << W << std::endl;
    return 0;
}
