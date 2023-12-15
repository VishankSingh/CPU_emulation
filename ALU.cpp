

#include "include/ALU.hpp"

bool* half_adder(bool a, bool b) {
    bool* result = new bool[2];
    result[1] = AND(a, b); // CARRY
    result[0] = XOR(a, b); // SUM
    return result; // SUM, CARRY
}

bool* full_adder(bool a, bool b, bool c) {
    bool* result = new bool[2];
    bool* half_adder_result = half_adder(a, b);
    bool* half_adder_result2 = half_adder(half_adder_result[0], c);
    result[0] = half_adder_result2[0]; // SUM
    result[1] = OR(half_adder_result[1], half_adder_result2[1]); // CARRY
    delete[] half_adder_result;
    delete[] half_adder_result2;
    return result; // SUM, CARRY
}

bool* eight_bit_adder(bool* a, bool* b) {
    bool* result = new bool[8];
    bool* full_adder_result = full_adder(a[7], b[7], 0);
    result[7] = full_adder_result[0]; // SUM
    bool carry = full_adder_result[1]; // CARRY
    delete[] full_adder_result;
    for (int i = 6; i >= 0; i--) {
        full_adder_result = full_adder(a[i], b[i], carry);
        result[i] = full_adder_result[0]; // SUM
        carry = full_adder_result[1]; // CARRY
        delete[] full_adder_result;
    }
    if (carry) {
        return (void*)0; // Overflow
    }
    return result; // SUM
}


