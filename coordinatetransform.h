#ifndef COORDINATETRANSFORM_H
#define COORDINATETRANSFORM_H

#include <cmath>
#include <algorithm>

#define BASEERROR 0.1

namespace X {

typedef double Matrix[3][3];

class Point3d {
public:
    double x, y, z;
    unsigned char i;
    Point3d() {}
    Point3d(double x, double y, double z)
        : x(x), y(y), z(z) {}
};

// calculation
double distance(Point3d pt1, Point3d pt2);
double distance(Point3d pt1);
bool isNeighbor(Point3d pt, Point3d cp, bool ishori);

void rMatrixInit(Matrix &rt);
void rMatrixmulti(Matrix &r, Matrix &rt);
void createRotMatrix_ZYX(Matrix &rt, double rotateX, double rotateY, double rotateZ);
void createRotMatrix_XYZ(Matrix &rt, double rotateX, double rotateY, double rotateZ);
void createRotMatrix_XYZ_Inv(Matrix &rt, double rotateX, double rotateY, double rotateZ);
void shiftPoint3d(Point3d &pt, Point3d &sh);
void rotatePoint3d(Point3d &pt, Matrix &a);
void normalPoint3d(Point3d &pt);
}
#endif // COORDINATETRANSFORM_H
