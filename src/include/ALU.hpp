#ifndef ALU_HPP
#define ALU_HPP

#include "gates.hpp"

bool* half_adder(bool a, bool b);
bool* full_adder(bool a, bool b, bool c);

bool* eight_bit_adder(bool* a, bool* b);


#endif