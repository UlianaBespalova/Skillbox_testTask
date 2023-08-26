#pragma once
#include "Matrix.h"

class IRobot{
public:
    virtual bool setPosition() const {};
    virtual bool setMotion() const {};
    virtual Matrix* getPosition() const = 0;
};
