//
// Created by jonsl on 28/05/18.
//

#ifndef INCREMENT_BY_ONE_ABS_H
#define INCREMENT_BY_ONE_ABS_H

/*
 * 3)
 * Write a function with the following signature that, without using arithmetic operators but only bit shifting,
 * bitwise and logical operators, adds one to the number in input and returns it.
 * The function accepts positive and negative numbers, converts them to their absolute value
 * and uses this last for the calculation. Return -1 when adding one will generate an incorrect result.
 *
 * int increment_by_one_abs(int x) {
 *      // Your code goes here
 * }
 *
 * Few examples:
 *      IncrementByOneAbs(0) = 1
 *      IncrementByOneAbs(57) = 58
 *      IncrementByOneAbs(-57) = 58
 *      IncrementByOneAbs(2147483647) = -1
 *
 */
extern int increment_by_one_abs(int x);

#endif //INCREMENT_BY_ONE_ABS_H
