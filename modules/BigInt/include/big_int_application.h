// Copyright 2023 Ilyin Maksim

#ifndef MODULES_BIGINT_INCLUDE_BIG_INT_APPLICATION_H_
#define MODULES_BIGINT_INCLUDE_BIG_INT_APPLICATION_H_

#include <string>

#include "include/bigInt.h"

class BigIntApplication {
 private:
    BigInt left;
    BigInt right;

    const std::string operators[11] = { "+", "-", "*", "/", "%", ">", ">=",
                                        "<", "<=", "==", "!=" };
    int operator_ind = -1;

    bool readArguments(int argc, const char** argv);
    std::string calculate();

 public:
    std::string operator()(int argc, const char** argv);
};

#endif  // MODULES_BIGINT_INCLUDE_BIG_INT_APPLICATION_H_
