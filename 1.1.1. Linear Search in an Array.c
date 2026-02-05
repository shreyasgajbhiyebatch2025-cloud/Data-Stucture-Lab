#include <stdio.h>

int main(void) {
    int n, key;

    scanf("%d", &n);

    int a[n];
    for (int idx = 0; idx < n; idx++) {
        scanf("%d", &a[idx]);
    }

    scanf("%d", &key);

    int pos = -1;
    for (int idx = 0; idx < n; idx++) {
        if (a[idx] == key) {
            pos = idx;
            break;
        }
    }

    if (pos != -1) {
        printf("found at position %d\n", pos);
    } else {
        printf("%d not found\n", key);
    }

    return 0;
}


