#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <numeric>
#include <algorithm>

/**
 * @brief Solves a single test case for the bracket string problem.
 * * This function determines if a given bracket string 's' can be transformed
 * into a regular bracket sequence using the specified operations and prints
 * one such sequence or -1 if impossible.
 */
void solve()
{
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    // A regular bracket sequence must have an even length.
    if (n % 2 != 0)
    {
        std::cout << -1 << std::endl;
        return;
    }

    // Use a stack to find the "unmatched" part of the string.
    // Matched '()' pairs are conceptually removed. The stack stores pairs of {character, index}.
    std::stack<std::pair<char, int>> st;
    for (int i = 0; i < n; ++i)
    {
        if (!st.empty() && st.top().first == '(' && s[i] == ')')
        {
            st.pop();
        }
        else
        {
            st.push({s[i], i});
        }
    }

    // If the stack is empty, the string is already regular.
    if (st.empty())
    {
        std::cout << s << std::endl;
        return;
    }

    // The characters remaining in the stack form the reduced string 'r'.
    // This reduced string will always be of the form ')))((('.
    std::vector<int> unmatched_indices;
    int open_count = 0;
    int close_count = 0;
    while (!st.empty())
    {
        unmatched_indices.push_back(st.top().second);
        if (st.top().first == '(')
        {
            open_count++;
        }
        else
        {
            close_count++;
        }
        st.pop();
    }
    // The stack gives indices in reverse order, so we reverse them to match string order.
    std::reverse(unmatched_indices.begin(), unmatched_indices.end());

    // If the reduced string has both ')' and '(', it contains an unfixable ')(
    // ' junction.
    if (open_count > 0 && close_count > 0)
    {
        std::cout << -1 << std::endl;
        return;
    }

    // To be transformable into a regular sequence, the length 'm' of the reduced
    // string must be a multiple of 4.
    int m = unmatched_indices.size();
    if (m % 4 != 0)
    {
        std::cout << -1 << std::endl;
        return;
    }

    // If conditions are met, a solution is possible. We construct one by modifying 's'.
    std::string t = s;
    if (close_count > 0)
    { // Reduced string is of the form '))))'
        // We need m/2 open brackets, requiring m/4 flips of '))' to '(('.
        // Flip the first m/4 pairs to create a '((...))' structure.
        int flips_needed = m / 4;
        for (int i = 0; i < flips_needed; ++i)
        {
            int idx1 = unmatched_indices[2 * i];
            int idx2 = unmatched_indices[2 * i + 1];
            t[idx1] = '(';
            t[idx2] = '(';
        }
    }
    else
    { // Reduced string is of the form '(((('
        // We need m/2 close brackets, requiring m/4 flips of '((' to '))'.
        // Flip the last m/4 pairs to create a '((...))' structure.
        int flips_needed = m / 4;
        for (int i = 0; i < flips_needed; ++i)
        {
            int idx1 = unmatched_indices[m - 1 - (2 * i)];
            int idx2 = unmatched_indices[m - 2 - (2 * i)];
            t[idx1] = ')';
            t[idx2] = ')';
        }
    }

    std::cout << t << std::endl;
}

int main()
{
    // Fast I/O for performance
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}