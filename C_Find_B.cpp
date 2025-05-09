#include <bits/stdc++.h>
using namespace std;

const int N = 300043; // সর্বোচ্চ অ্যারে সাইজ (প্রশ্ন অনুযায়ী)

int t;            // টেস্ট কেস সংখ্যা
int n, m;         // n = অ্যারের সাইজ, m = কোয়েরির সংখ্যা
int a[N];         // মূল অ্যারে
long long sum[N]; // prefix sum array: a-এর প্রতিটি সাবঅ্যারের যোগফল দ্রুত বের করার জন্য
int cnt1[N];      // prefix count array: এখন পর্যন্ত কতগুলো 1 আছে গোনা হয়

int main()
{
    ios_base::sync_with_stdio(false); // fast IO
    cin.tie(NULL);

    cin >> t; /   
    while (t--)
    {
        cin >> n >> m; // প্রতি টেস্ট কেসে অ্যারের সাইজ এবং কোয়েরি সংখ্যা ইনপুট

        // prefix array দুইটি reset করা হচ্ছে
        memset(sum, 0, sizeof(sum[0]) * (n + 5));
        memset(cnt1, 0, sizeof(cnt1[0]) * (n + 5));

        // মূল অ্যারে ইনপুট নেওয়া এবং prefix sum ও prefix count তৈরী করা
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            sum[i + 1] = sum[i] + a[i];          // prefix sum তৈরি করা হচ্ছে
            cnt1[i + 1] = cnt1[i] + (a[i] == 1); // এখন পর্যন্ত কয়টা 1 আছে তা রাখা হচ্ছে
        }

        // প্রতিটি কোয়েরি প্রসেস করা হচ্ছে
        while (m--)
        {
            int l, r;
            cin >> l >> r;
            --l; // ইনপুট 1-based, কিন্তু আমরা 0-based ব্যবহার করছি

            int len = r - l;                     // সাবঅ্যারের দৈর্ঘ্য
            long long cur_sum = sum[r] - sum[l]; // সাবঅ্যারের যোগফল
            int cur_cnt1 = cnt1[r] - cnt1[l];    // সাবঅ্যারে কতগুলো 1 আছে

            /*
             ব্যাখ্যা:
             একটি সাবঅ্যারে তখনই "good" বলা যাবে যদি এর মধ্যে এমন একটি array b বানানো যায়
             যাতে:
              - sum(a) = sum(b)
              - প্রতিটি index-এ a[i] ≠ b[i]
              - b[i] > 0

             এটা তখন সম্ভব যদি:
              - সাবঅ্যারের size > 1 হয় (না হলে দুটি index দরকার)
              - এবং, sum > size + সংখ্যক 1 → অর্থাৎ, যদি অনেক বড় মান থাকে, তাহলে মান পরিবর্তন করেও একই যোগফল রাখা যাবে

             নিচের condition তা যাচাই করে:
             */
            if (len + cur_cnt1 <= cur_sum && len > 1)
            {
                cout << "YES\n"; // সাবঅ্যারে "good"
            }
            else
            {
                cout << "NO\n"; // সাবঅ্যারে "good" না
            }
        }
    }
    return 0;
}
