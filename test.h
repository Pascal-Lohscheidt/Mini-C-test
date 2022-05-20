void describe(char* name);
int test(char* name, int result);

int expectByteEqual(char* actual, char* expected, int length);

int expectEqual(char* actual, char* expected);
int expectNotEqual(char* actual, char* expected);
