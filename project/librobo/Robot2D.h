#include "IRobot.h"

class Robot2D: public IRobot{
public:
    Robot2D();
    ~Robot2D();

    bool setPosition(double x, double y) const;
    bool setMotion(double delta_x, double delta_y) const;
    Matrix* getPosition() const override;
private:
    Matrix2d* matrix;
};
