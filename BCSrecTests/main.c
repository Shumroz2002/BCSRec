#include <stdio.h>
#include <assert.h>
#include "../BCSRec/main.h"  // Include your application header
// Shumroz Usmani
// Task 1: Unit Test for getPerimeter
void test_getPerimeter() {
    int length = 10;
    int width = 5;
    int expected = 30;  // Perimeter formula: 2 * (length + width)
    assert(getPerimeter(&length, &width) == expected);
    printf("test_getPerimeter passed!\n");
}

// Task 1: Unit Test for getArea
void test_getArea() {
    int length = 10;
    int width = 5;
    int expected = 50;  // Area formula: length * width
    assert(getArea(&length, &width) == expected);
    printf("test_getArea passed!\n");
}

// Task 2: Unit Test for setLength
void test_setLength() {
    int length = 1;

    setLength(25, &length); // Valid input
    assert(length == 25);

    setLength(0, &length); // Invalid input (below range)
    assert(length != 0);

    setLength(100, &length); // Invalid input (above range)
    assert(length != 100);

    printf("test_setLength passed!\n");
}

// Task 2: Unit Test for setWidth
void test_setWidth() {
    int width = 1;

    setWidth(50, &width); // Valid input
    assert(width == 50);

    setWidth(0, &width); // Invalid input (below range)
    assert(width != 0);

    setWidth(101, &width); // Invalid input (above range)
    assert(width != 101);

    printf("test_setWidth passed!\n");
}

// Run all tests
int main() {
    test_getPerimeter();
    test_getArea();
    test_setLength();
    test_setWidth();

    printf("All tests passed successfully!\n");
    return 0;
}
