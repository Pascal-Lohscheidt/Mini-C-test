#include <stdint.h>
#include <stdio.h>
#include "test.h"

int main(int argc, char** argv) {
    test("true", 1 == 1);
    test("false", 0);
    test("true", 1);
    test("Strings should be correct", expectEqual("a", "b"));
    test("Strings should be correct", expectNotEqual("a", "Bb"));
    
    test("Strings bytes should be the same", expectByteEqual("aaaaa", "aaaaa", 5));
    test("Strings bytes should not be the same", expectByteEqual("ABCDEF", "ABGDEF", 6));
    
    return 0;

}
