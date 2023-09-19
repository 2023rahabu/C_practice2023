#include <stdio.h>

int _strcmp(const char *s1, const char *s2) {
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
    }

    if (*s1 == *s2) {
        return 0;  // Both strings are equal
    } else if (*s1 < *s2) {
        return -1; // s1 is less than s2
    } else {
        return 1;  // s1 is greater than s2
    }
}

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";

    int result1 = _strcmp(str1, str2);
    int result2 = _strcmp(str1, str3);

    if (result1 == 0) {
        printf("str1 and str2 are equal\n");
    } else {
        printf("str1 and str2 are not equal\n");
    }

    if (result2 == 0) {
        printf("str1 and str3 are equal\n");
    } else {
        printf("str1 and str3 are not equal\n");
    }

    return 0;
}

