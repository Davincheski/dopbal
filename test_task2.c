#include <assert.h>
#include <stdio.h>

int student_apples(int n, int k);

int main() {
    assert(student_apples(3, 14) == 2);
    assert(student_apples(5, 25) == 0);
    assert(student_apples(10, 7) == 7);
    assert(student_apples(1, 10000) == 0);
    printf("Все тесты пройдены!\n");
    return 0;
}
