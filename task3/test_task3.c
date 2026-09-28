#include <assert.h>
#include <stdio.h>

int full_kilometers(int meters);

int main() {
    assert(full_kilometers(1500) == 1);
    assert(full_kilometers(2000) == 2);
    assert(full_kilometers(999) == 0);
    assert(full_kilometers(12345) == 12);
    printf("Все тесты пройдены!\n");
    return 0;
}