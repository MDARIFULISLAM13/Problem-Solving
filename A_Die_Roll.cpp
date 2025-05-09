#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int Y, W;
    cin >> Y >> W;

    int max_roll = max(Y, W);
    int favorable = 6 - max_roll + 1;
    int gcd = __gcd(favorable, 6);

    cout << favorable / gcd << "/" << 6 / gcd << endl;
    return 0;
}