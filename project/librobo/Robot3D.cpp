#include "Robot3D.h"

Robot3D::Robot3D() {
    matrix = new Matrix3d();
}

Robot3D::~Robot3D() {
    delete matrix;
}

bool Robot3D::setPosition(double x, double y, double z) const {
    if (matrix == nullptr) {
        return false;
    }
    matrix->x = x;
    matrix->y = y;
    matrix->z = z;
    return true;
}

bool Robot3D::setMotion(double delta_x, double delta_y, double delta_z) const {
    if (matrix == nullptr) {
        return false;
    }
    matrix->x += delta_x;
    matrix->y += delta_y;
    matrix->z += delta_z;
    return true;
}

Matrix* Robot3D::getPosition() const {
    if (matrix == nullptr) {
        return nullptr;
    }
    return matrix;
}
