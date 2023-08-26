#pragma once
#include <iostream>

class Matrix {
public:
    virtual void printMatrix() const = 0;
};

class Matrix2d: public Matrix {
public:
    double x;
    double y;
    explicit Matrix2d(double new_x=0, double new_y=0) : x(new_x), y(new_y) {};
    void printMatrix() const override {
        printf("x = %.2lf, y = %.2lf\n", x, y);
    }
};

class Matrix3d: public Matrix {
public:
    double x;
    double y;
    double z;
    explicit Matrix3d(double new_x=0, double new_y=0, double new_z=0) : x(new_x), y(new_y), z(new_z) {};
    void printMatrix() const override {
        printf("x = %.2lf, y = %.2lf, z = %.2lf\n", x, y, z);
    }
};