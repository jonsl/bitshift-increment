
#include "increment_by_one_abs.h"
#include <stdio.h>
#include <limits.h>
#include <assert.h>
#include <stdlib.h>

int main() {

    long int i;
    for (i = INT_MIN; i <= INT_MAX; ++i) {
        int input = (int) i;
        int output = increment_by_one_abs(input);
        if (i == INT_MIN || i == INT_MIN + 1 || i == INT_MAX) {
            assert(output == -1);
        } else {
            assert(output == abs(input) + 1);
        }
    }

        return 0;
}
