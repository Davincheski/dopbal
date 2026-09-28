#include <stdio.h>

int full_kilometers(int meters);

int main() {
    int meters = 0;
    scanf("%d", &meters);
    printf("%d\n", full_kilometers(meters));
    return 0;
}
