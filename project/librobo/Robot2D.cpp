#include "Robot2D.h"

Robot2D::Robot2D() {
    matrix = new Matrix2d();
}

Robot2D::~Robot2D() {
    delete matrix;
}

bool Robot2D::setPosition(double x, double y) const {
    if (matrix == nullptr) {
        return false;
    }
    matrix->x = x;
    matrix->y = y;
    return true;
}

bool Robot2D::setMotion(double delta_x, double delta_y) const {
    if (matrix == nullptr) {
        return false;
    }
    matrix->x += delta_x;
    matrix->y += delta_y;
    return true;
}

Matrix* Robot2D::getPosition() const {
    if (matrix == nullptr) {
        return nullptr;
    }
    return matrix;
}
