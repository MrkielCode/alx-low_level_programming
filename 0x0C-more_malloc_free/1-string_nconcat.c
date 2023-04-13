#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *result;
    unsigned int s1_len, s2_len, result_len;

    // Handle NULL inputs
    if (s1 == NULL) {
        s1 = "";
    }
    if (s2 == NULL) {
        s2 = "";
    }

    s1_len = strlen(s1);
    s2_len = strlen(s2);

    // Adjust n if necessary
    if (n > s2_len) {
        n = s2_len;
    }

    // Compute length of result string
    result_len = s1_len + n;

    // Allocate memory for result string
    result = (char *) malloc(result_len + 1);

    if (result == NULL) {
        return NULL;
    }

    // Copy s1 into result
    memcpy(result, s1, s1_len);

    // Copy up to n bytes of s2 into result
    memcpy(result + s1_len, s2, n);

    // Add null terminator
    result[result_len] = '\0';

    return result;
}
