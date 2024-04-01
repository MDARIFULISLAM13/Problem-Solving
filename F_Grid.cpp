#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    const int n = 21; // Size of the grid
    std::vector<std::string> grid(n);

    // Read the grid
    for (int i = 0; i < n; ++i)
    {
        std::cin >> grid[i];
    }

    int max_ones = 0;

    // Check consecutive '1's in each row
    for (int i = 0; i < n; ++i)
    {
        int count = 0;
        for (int j = 0; j < n; ++j)
        {
            if (grid[i][j] == '1')
            {
                count++;
                max_ones = std::max(max_ones, count);
            }
            else
            {
                count = 0;
            }
        }
    }

    // Check consecutive '1's in each column
    for (int j = 0; j < n; ++j)
    {
        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            if (grid[i][j] == '1')
            {
                count++;
                max_ones = std::max(max_ones, count);
            }
            else
            {
                count = 0;
            }
        }
    }

    // Check consecutive '1's in each diagonal (top-left to bottom-right)
    for (int i = 0; i < n; ++i)
    {
        int count = 0;
        for (int j = 0; j < n && i + j < n; ++j)
        {
            if (grid[i + j][j] == '1')
            {
                count++;
                max_ones = std::max(max_ones, count);
            }
            else
            {
                count = 0;
            }
        }
    }

    // Check consecutive '1's in each diagonal (top-right to bottom-left)
    for (int j = 1; j < n; ++j)
    {
        int count = 0;
        for (int i = 0; i < n && i + j < n; ++i)
        {
            if (grid[i][i + j] == '1')
            {
                count++;
                max_ones = std::max(max_ones, count);
            }
            else
            {
                count = 0;
            }
        }
    }

    std::cout << max_ones << std::endl;

    return 0;
}
