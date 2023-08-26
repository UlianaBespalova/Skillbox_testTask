// Copyright 2023 UlianaBespalova
#include <gtest/gtest.h>
#include <algorithm>
#include <chrono>
#include <cstdlib>
#include <iostream>

#include "Matrix.h"
#include "Robot2D.h"
#include "Robot3D.h"


TEST(robo2d_create_class, null_init) {
    auto* robo2d = new Robot2D();
    auto *position = dynamic_cast<Matrix2d *>(robo2d->getPosition());
    EXPECT_EQ(position->x, 0);
    EXPECT_EQ(position->y, 0);
}

TEST(robo2d_set_values, correct_values) {
    auto* robo2d = new Robot2D();
    robo2d->setPosition(15, -27);
    auto *position = dynamic_cast<Matrix2d *>(robo2d->getPosition());
    EXPECT_EQ(position->x, 15);
    EXPECT_EQ(position->y, -27);

    robo2d->setPosition(-1, 616);
    position = dynamic_cast<Matrix2d *>(robo2d->getPosition());
    EXPECT_EQ(position->x, -1);
    EXPECT_EQ(position->y, 616);
}

TEST(robo2d_set_motion, correct_values) {
    auto* robo2d = new Robot2D();

    robo2d->setMotion(10, 16);
    auto *position = dynamic_cast<Matrix2d *>(robo2d->getPosition());
    EXPECT_EQ(position->x, 10);
    EXPECT_EQ(position->y, 16);

    robo2d->setMotion(10, 16);
    position = dynamic_cast<Matrix2d *>(robo2d->getPosition());
    EXPECT_EQ(position->x, 20);
    EXPECT_EQ(position->y, 32);

    robo2d->setMotion(-1, -10);
    position = dynamic_cast<Matrix2d *>(robo2d->getPosition());
    EXPECT_EQ(position->x, 19);
    EXPECT_EQ(position->y, 22);
}

TEST(robo3d_create_class, null_init) {
    auto* robo3d = new Robot3D();
    auto *position = dynamic_cast<Matrix3d *>(robo3d->getPosition());
    EXPECT_EQ(position->x, 0);
    EXPECT_EQ(position->y, 0);
    EXPECT_EQ(position->z, 0);
}

TEST(robo3d_set_values, correct_values) {
    auto* robo3d = new Robot3D();
    robo3d->setPosition(15, -27, 200);
    auto *position = dynamic_cast<Matrix3d *>(robo3d->getPosition());
    EXPECT_EQ(position->x, 15);
    EXPECT_EQ(position->y, -27);
    EXPECT_EQ(position->z, 200);

    robo3d->setPosition(-1, 616, 627);
    position = dynamic_cast<Matrix3d *>(robo3d->getPosition());
    EXPECT_EQ(position->x, -1);
    EXPECT_EQ(position->y, 616);
    EXPECT_EQ(position->z, 627);
}

TEST(robo3d_set_motion, correct_values) {
    auto* robo3d = new Robot3D();

    robo3d->setMotion(10, 16, 1000);
    auto *position = dynamic_cast<Matrix3d *>(robo3d->getPosition());
    EXPECT_EQ(position->x, 10);
    EXPECT_EQ(position->y, 16);
    EXPECT_EQ(position->z, 1000);

    robo3d->setMotion(10, 16, 1000);
    position = dynamic_cast<Matrix3d *>(robo3d->getPosition());
    EXPECT_EQ(position->x, 20);
    EXPECT_EQ(position->y, 32);
    EXPECT_EQ(position->z, 2000);

    robo3d->setMotion(-1, -10, -100);
    position = dynamic_cast<Matrix3d *>(robo3d->getPosition());
    EXPECT_EQ(position->x, 19);
    EXPECT_EQ(position->y, 22);
    EXPECT_EQ(position->z, 1900);
}

int main(int argc, char *argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
