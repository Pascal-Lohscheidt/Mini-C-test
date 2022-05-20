#include <stdio.h>
#include <string.h>
#include <stdint.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

void describe(char* name) {
    printf(ANSI_COLOR_CYAN "=========================" ANSI_COLOR_RESET);
    printf("Test: %s", name);
    printf(ANSI_COLOR_CYAN "=========================\n" ANSI_COLOR_RESET);
    return;
}

int test(char* name, int result) {
    if(result) {
        printf(ANSI_COLOR_GREEN "√" ANSI_COLOR_RESET " < %s \n", name);
        return 0;
    } else {
        printf(ANSI_COLOR_RED "✘" ANSI_COLOR_RESET " < %s \n", name);
        return 1;
    }
}


int expectByteEqual(char* actual, char* expected, int length) {
    for(int i = 0; i < length; i++) {
        if(actual[i] != expected[i]) {
            printf("=> Data not equal \n");
            printf("Expected: "ANSI_COLOR_GREEN);
            for(int z = 0; z < length; z++) {
                if(actual[z] == expected[z])
                    printf("%02u ", expected[z]);
                else
                    printf(ANSI_COLOR_RED"%02u "ANSI_COLOR_GREEN, expected[z]);
                    
            }
            
            printf("\n");
            printf(ANSI_COLOR_RESET"Actual:   "ANSI_COLOR_GREEN);
            
            for(int z = 0; z < length; z++) {
                if(actual[z] == expected[z])
                    printf("%02u ", actual[z]);
                else
                    printf(ANSI_COLOR_RED"%02u "ANSI_COLOR_GREEN, actual[z]);
            }
            printf("\n"ANSI_COLOR_RESET);
            return 0;
        }
    }
    
    return 1;
}


int expectEqual(char* actual, char* expected) {
    if(strcmp(actual, expected) != 0) {
        printf("=> Strings not matching: \n");
        printf(ANSI_COLOR_YELLOW "Actual: >%s<" ANSI_COLOR_RESET "\n", actual);
        printf(ANSI_COLOR_YELLOW "Expected: >%s<" ANSI_COLOR_RESET "\n", expected);
        return 0;
    }
    
    return 1;
}

int expectNotEqual(char* actual, char* expected) {
    if(strcmp(actual, expected) == 0) {
        printf("=> Strings matching but should not: \n");
        printf(ANSI_COLOR_YELLOW ">%s< should not be >%s< \n" ANSI_COLOR_RESET, actual, expected);
        return 0;
    }
    
    return 1;
}
