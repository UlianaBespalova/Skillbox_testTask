// Copyright 2023 UlianaBespalova
#include "Matrix.h"
#include "Robot2D.h"
#include "Robot3D.h"


int main() {
    printf("Изменение координат в двумерной матрице:\n");
    auto robo2d = Robot2D();
    robo2d.getPosition()->printMatrix();

    robo2d.setMotion(15, -12);
    robo2d.getPosition()->printMatrix();

    robo2d.setMotion(-110, 100);
    robo2d.getPosition()->printMatrix();


    printf("\nИзменение координат в трёхмерной матрице:\n");
    auto robo3d = Robot3D();
    robo3d.getPosition()->printMatrix();

    robo3d.setMotion(10, 10, 10);
    robo3d.getPosition()->printMatrix();

    robo3d.setMotion(-50, 500, -5000);
    robo3d.getPosition()->printMatrix();


    return 0;
}

