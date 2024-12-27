#include <stdio.h>

void string_xor_with_key(char *str, int len, int key) {
    for (int i = 0; i < len; i++) {
        str[i] ^= key;
    }
}

int array_sum(int *arr, int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }
    return sum;
}
