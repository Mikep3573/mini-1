/**
 * This file is for Mini-Programming Assignment #1
 * This was written by Michael Piscione
*/
#include <stdio.h>
#include <math.h>

/**
 * sumAndCompare takes two integers (i1 and i2) and an integer pointer (result). 
 * It first sums i1 and i2 and stores the result in the memory location specified by result. 
 * It then compares i1 and i2 and returns 1 if i1 > i2, 0 if i1 = i2, or -1 if i1 < i2.
 * Parameters: i1, i2, the two integers. *result, the integer pointer.
 * Return: 1 if i1 > i2, 0 if i1 = i2, -1 if i1 < i2.
*/
int sumAndCompare(int i1, int i2, int *result) {
    // Add i1 and i2
    int sum = i1 + i2;

    // Put sum in memory at the address specified by result
    *result = sum;

    // Compare i1 and i2
    int comparedVal = i1 - i2;
        // If i1 > i2 return 1
        if (comparedVal > 0) {
            return 1;
        }
        // If i1 = i2 return 0
        else if (comparedVal == 0) {
            return 0;
        }
        // If i1 < i2 return -1
        else {
            return -1;
        }
}

int main() {
	int x = 0;
	int *result = &x;
	int rn = sumAndCompare(2, 1, result);
	printf("result = %d and return = %d\n", *result, rn);
	return 0;
}
