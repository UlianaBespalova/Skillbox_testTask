#include "IRobot.h"

class Robot3D: public IRobot{
public:
    Robot3D();
    ~Robot3D();

    bool setPosition(double x, double y, double z) const;
    bool setMotion(double delta_x, double delta_y, double delta_z) const;
    Matrix* getPosition() const override;
private:
    Matrix3d* matrix;
};
