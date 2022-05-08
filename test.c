#include <stdio.h>
#include <string.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int test(char* name, int result) {
    if(result) {
        printf(ANSI_COLOR_GREEN "Success" ANSI_COLOR_RESET " < %s \n", name);
        return 0;
    } else {
        printf(ANSI_COLOR_RED "Failure " ANSI_COLOR_RESET " < %s \n", name);
        return 1;
    }
}


int expectEqual(char* actual, char* expected) {
    if(strcmp(actual, expected) != 0) {
        printf("=> Strings not matching: \n");
        printf(ANSI_COLOR_YELLOW "Actual: %s" ANSI_COLOR_RESET "\n", actual);
        printf(ANSI_COLOR_YELLOW "Expected: %s " ANSI_COLOR_RESET " \n", expected);
        return 0;
    }
    
    return 1;
}

int expectNotEqual(char* actual, char* expected) {
    if(strcmp(actual, expected) == 0) {
        printf("=> Strings matching but shouldnt! \n");
        printf("%s should not be %s \n", actual, expected);
        return 0;
    }
    
    return 1;
}
