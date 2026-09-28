#include <stdio.h>

int student_apples(int n, int k);

int main() {
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);
    printf("%d\n", student_apples(n, k));
    return 0;
}
