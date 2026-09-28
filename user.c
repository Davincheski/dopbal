#include <stdio.h>

int total_kopecks(int a, int b, int n);

int main() {
    int a = 0, b = 0, n = 0;
    scanf("%d %d %d", &a, &b, &n);
    int total = total_kopecks(a, b, n);
    printf("%d %d\n", total / 100, total % 100);
    return 0;
}
