/**
 *
 * Author : Md.Ariful Islam
 * Date : 20-08-2024
 * time : 04:53:23
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
const int lm = 1e6 + 123;  // বড় লিমিটের জন্য
bitset<lm> ip;            // প্রাইম চেকের জন্য
vector<int> p;            // প্রাইম সংখ্যা গুলো রাখার জন্য

// Sieve of Eratosthenes
void arif(int n)
{
    p.push_back(2);
    for (int i = 3; i <= n; i += 2)
    {
        ip[i] = true;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (ip[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
            {
                ip[j] = false;
            }
        }
    }
    ip[2] = true;
    for (int i = 3; i <= n; i += 2)
    {
        if (ip[i] == true)
        {
            p.push_back(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    arif(n); // 2 থেকে n পর্যন্ত প্রাইম বের করা হচ্ছে

    int count = 0;

    // Neighboring primes গুলো চেক করা হচ্ছে
    for (int i = 0; i < p.size() - 1; ++i)
    {
        int sum = p[i] + p[i + 1] + 1; // p_i + p_{i+1} + 1
        if (sum <= n && ip[sum]) // যদি এটি প্রাইম হয় এবং n এর চেয়ে ছোট হয়
        {
            count++;
        }
    }

    // যদি count >= k হয়, তাহলে YES, অন্যথায় NO
    if (count >= k)
    {
        yes
    }
    else
    {
        no
    }

    return 0;
}
