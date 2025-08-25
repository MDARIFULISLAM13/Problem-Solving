#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Input range
    int a, b, n;
    // cout << "Enter range a b: ";
    cin >> a >> b;
    //  cout << "Enter how many numbers to generate: ";
    cin >> n;

    // Initialize random seed
    srand(time(0));

    while (n--)
    {

        for (int i = 0; i < 3; i++)
        {
            int num = a + rand() % (b - a + 1);
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
