#include <assert.h>
#include <stdio.h>

int total_kopecks(int a, int b, int n);

int main() {
    assert(total_kopecks(1, 50, 3) == 450);
    assert(total_kopecks(0, 99, 2) == 198);
    assert(total_kopecks(2, 0, 5) == 1000);
    assert(total_kopecks(3, 25, 0) == 0);
    printf("Все тесты пройдены!\n");
    return 0;
}
