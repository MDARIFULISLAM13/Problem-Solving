/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-06-2024
 * time : 21:51:10
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n";
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>

ll calculateMaxVolume(ll length, ll width, ll height, ll divisor) {


    ll maxVolume = 0;
    for (ll lengthIndex = 1; lengthIndex <= length; lengthIndex++) {
        for (ll widthIndex = 1; widthIndex <= width; widthIndex++) {
            if (divisor % (lengthIndex * widthIndex) == 0 && (divisor / (lengthIndex * widthIndex)) <= height) {

                maxVolume = max(maxVolume, (length - lengthIndex + 1) * (width - widthIndex + 1) * (height - (divisor / (lengthIndex * widthIndex)) + 1));
            }
        }
    }
    return maxVolume;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll length, width, height, divisor;
        cin >> length >> width >> height >> divisor;
        cout << calculateMaxVolume(length, width, height, divisor) << endl;
    }

    return 0;
}