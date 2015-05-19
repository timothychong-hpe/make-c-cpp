/*
 * Copyright (c) 2014, Joe Example
 */
#include "model/Truck.h"
#include "model/Vehicle.h"
#include "model/Truck_TEST.h"

#include "gtest/gtest.h"

TEST(TruckTest, test) {
  Truck t(FORD, "F150", 1996, 5);
  ASSERT_EQ(t.make(), "Ford");
  ASSERT_EQ(t.model(), "F150");
  ASSERT_EQ(t.year(), 1996);
  ASSERT_EQ(t.bedLength(), 5);

  Vehicle* vehicle = dynamic_cast<Vehicle*>(&t);
  ASSERT_FALSE(vehicle == NULL);
}
