#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    cin >> a;

    int vowels = 0, consonants = 0, ng_pairs = 0;

    // Count vowels and consonants
    for (char c : a) {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowels++;
        }
        else if (c == 'Y') {
            vowels++;  // Treat 'Y' as a vowel
        }
        else if (c == 'N' || c == 'G') {
            // Keep track of NG pair to form a consonant
            if (c == 'N') {
                ng_pairs++;
            }
            consonants++;  // 'N' and 'G' are consonants
        }
        else {
            consonants++;  // Treat all other letters as consonants
        }
    }

    // Handle 'NG' pairs that form a single consonant
    consonants -= ng_pairs;

    // Calculate the number of syllables we can form (CVC pattern)
    int syllables = min(vowels, consonants / 2);  // A syllable needs 1 vowel and 2 consonants

    // Each syllable contributes 3 characters to the word
    cout << syllables * 3 << "\n";
    return 0;
}
