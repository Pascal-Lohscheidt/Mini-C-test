#include <stdint.h>
#include <stdio.h>
#include "test.h"

int main(int argc, char** argv) {
    test("true", 1 == 1);
    test("false", 0);
    test("true", 1);
    test("Strings should be correct", expectEqual("a", "b"));
    test("Strings should be correct", expectNotEqual("a", "Bb"));
    
    return 0;

}
