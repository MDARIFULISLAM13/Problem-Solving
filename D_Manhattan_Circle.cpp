/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-06-2024
 * time : 21:25:38
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testCases;
    cin >> testCases;
    for (int caseIndex = 0; caseIndex < testCases; caseIndex++) {
        int rows, cols;
        cin >> rows >> cols;
        int leftMost = cols + 1;
        int rightMost = -1;
        int maxCount = 0;
        vector<string> grid(rows);
        for (int i = 0; i < rows; ++i) {
            cin >> grid[i];
            grid[i] += '.';
        }


        for (string row : grid) {
            int flag = 0;
            int count = 0;
            for (int j = 0; j <= cols; ++j) {
                if (row[j] == '#') {
                    count++;
                    if (flag == 0) {
                        flag = 1;
                        leftMost = min(leftMost, j);
                    }
                }
                else if (flag == 1) {
                    rightMost = max(rightMost, j - 1);
                    flag = 0;
                }
            }
            maxCount = max(count, maxCount);
        }

        int resultRow = -1;

        for (int i = 0; i < rows; ++i) {
            int count = 0;
            for (int j = 0; j <= cols; ++j) {
                if (grid[i][j] == '#') {
                    count++;
                    if (count == maxCount) {
                        resultRow = i;
                        break;
                    }
                }
            }
        }

        cout << resultRow + 1 << " " << int((leftMost + 1 + rightMost + 1) / 2) << endl;
    }


    return 0;
}