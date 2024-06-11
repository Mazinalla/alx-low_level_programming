#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: pointer.
 * @needle: pointer.
 * Return:(0)always.
 */

char *_strstr(char *haystack, char *needle) {
    char *p1;
    char *p1Begin;
    char *p2;

    if (!*needle) {
        return haystack; /* If needle is empty, return the entire haystack */
    }
    
    p1 = haystack;
    while (*p1) {
        p1Begin = p1;
        p2 = needle;
        
        while (*p1 && *p2 && (*p1 == *p2)) {
            p1++;
            p2++;
        }
        
        if (!*p2) {
            return p1Begin; /* Found the needle in haystack */
        }
        
        p1 = p1Begin + 1; /* Move to the next character in haystack and try again */
    }
    
    return NULL; /* Needle not found */
}
