#ifndef ERRORS_HPP
#define ERRORS_HPP

#include <iostream>

void error(std::string message) {
    std::cout << "ERROR: " << message << std::endl;
}

void BUFFER_OVERFLOW() {
    error("BUFFER OVERFLOW");
}

void BUFFER_UNDERFLOW() {
    error("BUFFER UNDERFLOW");
}

void INVALID_INSTRUCTION() {
    error("INVALID INSTRUCTION");
}

void INVALID_REGISTER() {
    error("INVALID REGISTER");
}

void INVALID_ADDRESS() {
    error("INVALID ADDRESS");
}

void INVALID_INPUT() {
    error("INVALID INPUT");
}

void INVALID_OUTPUT() {
    error("INVALID OUTPUT");
}

void INVALID_INPUT_OUTPUT() {
    error("INVALID INPUT/OUTPUT");
}

#endif