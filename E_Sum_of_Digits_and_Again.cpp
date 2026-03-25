#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    // Base case
    if (s.length() == 1)
    {
        cout << s << "\n";
        return;
    }

    long long D = 0;
    vector<int> count(10, 0);
    for (char c : s)
    {
        D += c - '0';
        count[c - '0']++;
    }

    // $x_1$ check range [D - 150, D]
    long long start_x1 = max(1LL, D - 150);
    for (long long x1 = start_x1; x1 <= D; x1++)
    {
        string seq_str = "";
        long long curr = x1;

        // Generate the sequence from x_1 onwards
        while (curr > 9)
        {
            seq_str += to_string(curr);
            long long nxt = 0;
            long long temp = curr;
            while (temp > 0)
            {
                nxt += temp % 10;
                temp /= 10;
            }
            curr = nxt;
        }
        seq_str += to_string(curr);

        // Count required digits for the sequence
        vector<int> req_count(10, 0);
        for (char c : seq_str)
        {
            req_count[c - '0']++;
        }

        bool possible = true;
        long long rem_sum = 0;
        vector<int> rem(10, 0);

        // Validate if we have enough digits and calculate sum of remaining digits
        for (int i = 0; i < 10; i++)
        {
            if (req_count[i] > count[i])
            {
                possible = false;
                break;
            }
            rem[i] = count[i] - req_count[i];
            rem_sum += (long long)i * rem[i];
        }

        // Check if the remaining digits exactly sum up to our candidate x_1
        if (possible && rem_sum == x1)
        {
            string x0 = "";

            // Build x_0 making sure there are no leading zeros
            for (int i = 1; i <= 9; i++)
            {
                if (rem[i] > 0)
                {
                    x0 += to_string(i);
                    rem[i]--;
                    break;
                }
            }
            // Append all other remaining digits
            for (int i = 0; i <= 9; i++)
            {
                while (rem[i] > 0)
                {
                    x0 += to_string(i);
                    rem[i]--;
                }
            }

            // Output x_0 followed by the sequence string
            cout << x0 << seq_str << "\n";
            return;
        }
    }
}

int main()
{
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}