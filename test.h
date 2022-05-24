void describe(char* name);
int test(char* name, int result);

int expectByteEqual(char* actual, char* expected, int length);

int expectEqual(char* actual, char* expected);
int expectNotEqual(char* actual, char* expected);


int expectFloatEqual(float actual, float expected);
int expectDoubleEqual(double actual, double expected);
int expectIntEqual(int actual, int expected);
int expectLongEqual(long actual, long expected);
