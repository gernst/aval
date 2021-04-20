#include <stdio.h>

void __assert_fail(const char * assertion, const char * file, unsigned int line, const char * function) {
    printf("unsat\n");
    exit(0);
}

static unsigned long long trace[] = {
    (unsigned long long) 8,
    (unsigned long long) 7,
    (unsigned long long) 6,
    (unsigned long long) 5,
    (unsigned long long) 4,
    (unsigned long long) 3,
    (unsigned long long) 2,
    (unsigned long long) 1,
    (unsigned long long) 0,
};

static unsigned int index = 0;
unsigned long long __VERIFIER_next_nondet(unsigned int sign, unsigned int bits, const char *fn) {
    return trace[index++];
}

