/*
 * Copyright (c) 2014, Joe Example
 */
#include <cassert>
#include <cstdint>
#include <fstream>  //NOLINT
#include <sstream>
#include <vector>

#include "util/LinkedList.h"

#include "model/Vehicle.h"
#include "model/Truck.h"
#include "model/Car.h"

#include "json/json.h"
#include "zlib/zlib.h"

int main(int argc, char** argv) {
  for (int i = 0; i < argc; i++) {
    printf("Arg[%i]: %s\n", i, argv[i]);
  }

  printf("This is program #2\n");

  return 0;
}