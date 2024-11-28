#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello,";  // Ensure str1 has enough space for concatenation
    char str2[] = "World!";

    // Concatenate str2 to str1
    strcat(str1, str2);

    // Display the result
    printf("Concatenated String: %s\n", str1);

    return 0;
}
