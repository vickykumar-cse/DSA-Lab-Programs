#include <stdio.h>
int main() {
    int a[100], n, key, i, pos = -1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    for (i = 0; i < n; i++)
        if (a[i] == key) { pos = i; break; }

    if (pos == -1) printf("Element not found");
    else printf("Element found at position %d", pos + 1);
    return 0;
}