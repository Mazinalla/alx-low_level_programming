#include <stdio.h>
#include "main.h"

unsigned int binary_to_uint(const char *b) {
    if (b == NULL)
        return 0;

    unsigned int result = 0;
    while (*b != '\0') {
        if (*b == '0' || *b == '1') {
            result = (result << 1) + (*b - '0');
            b++;
        } else {
            // Invalid character found, return 0
            return 0;
        }
    }

    return result;
}
