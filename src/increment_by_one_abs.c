//
// Created by jslater
//

#include "increment_by_one_abs.h"
#include <limits.h>
#include <stdlib.h>

int increment_by_one_abs(int x) {

    /*
     * In general, a logical XOR operation can be used to add 2 bits together:
     *
     * A B | XOR | ADD
     * ----|-----|----
     * 0 0 |  0  | 0 0
     * 0 1 |  1  | 0 1
     * 1 0 |  1  | 0 1
     * 1 1 |  0  | 1 0 <-- overflow: the carry is logical A & B shifted left 1
     *
     * the half adder has 2 outputs: sum and carry
     * sum is computed with logical XOR, carry is computed with logical AND
     * the carry represents overflow into the next digit and is therefore shifted
     */

    /*
     * convert to abs value
     */

    unsigned ux = (unsigned) abs(x);

    /*
     * validate range
     */

    if (ux >= INT_MAX) {
        return -1;
    }

    /*
     * on the first iteration 1 is added to the result to perform the increment
     * on subsequent iterations, the overflow from the previous addition is added to the result
     * until the carry is 0
     */

    /*
     * add the increment;
     */
    unsigned uy = 1;

    /*
     * iterate until carry is 0
     */
    while (uy) {
        /*
         * set overflow bit if both bits are set
         */
        unsigned overflow = ux & uy;

        /*
         * 'add' bits with logical XOR
         */
        ux = ux ^ uy;

        /*
         * propogate the overflow into the next highest-order bit
         */
        uy = overflow << 1;
    }

    return ux;
}
