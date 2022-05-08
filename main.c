#include <stdint.h>
#include <stdio.h>
#include "test.h"

int ean13(uint64_t ean);
uint64_t pow(uint64_t base, uint64_t exp);

int main(int argc, char** argv) {
    test("true", 1 == 1);
    test("false", 0);
    test("true", 1);
    test("Strings should be correct", expectEqual("a", "b"));
    test("Strings should be correct", expectNotEqual("a", "Bb"));
    
    return 0;
}
