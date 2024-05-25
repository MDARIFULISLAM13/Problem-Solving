#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to calculate the luckiness of a number
int calculate_luckiness(int number) {
    string num_str = to_string(number);
    int max_digit = *max_element(num_str.begin(), num_str.end()) - '0';
    int min_digit = *min_element(num_str.begin(), num_str.end()) - '0';
    return max_digit - min_digit;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        int luckiest_number = l;
        int max_luckiness = calculate_luckiness(l);

        // Check each number in the range from l to r
        for (int i = l; i <= r; ++i) {
            int current_luckiness = calculate_luckiness(i);
            if (current_luckiness > max_luckiness) {
                max_luckiness = current_luckiness;
                luckiest_number = i;
            }
            // Early exit if the maximum possible luckiness is found
            if (max_luckiness == 9) {
                break;
            }
        }

        cout << luckiest_number << endl;
    }

    return 0;
}
