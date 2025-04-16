/**
 *
 * Author : Md.Ariful Islam
 * Date : 06-08-2024
 * time : 20:36:56
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
// Function to find the greatest common divisor
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to convert decimal to fraction
void decimalToFraction(double number)
{
    const int precision = 1000000; // Consider precision up to 10^6
    int numerator = round(number * precision);
    int denominator = precision;

    // Reduce the fraction
    int commonDivisor = gcd(abs(numerator), denominator);
    numerator /= commonDivisor;
    denominator /= commonDivisor;

    // Output the fraction
    cout << numerator << "/" << denominator << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        du a, b, c;
        cin >> a >> b >> c;
        du s = (a + b + c) / 2;
        du A = sqrt(s * (s - a) * (s - b) * (s - c));
        du r = A / s;
        r = pow(r, 2);
        decimalToFraction(r);
    }

    return 0;
}