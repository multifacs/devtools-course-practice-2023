// Copyright 2023 Ilyin Maksim

#include <iostream>

#include "include/bigInt_application.h"

int main(int argc, const char** argv) {
  CLPApplication app;
  std::string output = app(argc, argv);
  std::cout << output << std::endl;
  return 0;
}

