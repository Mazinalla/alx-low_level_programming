#include <stdio.h>

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    int found;

    // Iterate through each character in s
    while (*s) {
        found = 0;

        // Iterate through each character in accept
        char *a = accept;
        while (*a) {
            // If the current character in s matches any character in accept
            if (*s == *a) {
                count++; // Increment the count
                found = 1; // Mark as found
                break; // Break out of the inner loop
            }
            a++; // Move to the next character in accept
        }

        // If the current character in s is not found in accept, stop
        if (!found) break;

        s++; // Move to the next character in s
    }

    return count;
}