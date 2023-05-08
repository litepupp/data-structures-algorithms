#include "array.hpp"
#include <stdio.h>

int main() {
    Array<int> test;

    printf("items: %d, length: %d\n", test.size(), test.capacity());

    test.push(5);
    test.push(1);
    test.push(9);

    printf("items: %d, length: %d\n", test.size(), test.capacity());

    test.push(0);
    test.push(7);
    test.push(7);
    test.push(3);
    test.push(2);
    test.push(5);
    test.push(1);
    test.push(1);
    test.push(9);

    printf("items: %d, length: %d\n", test.size(), test.capacity());

    return 0;
}