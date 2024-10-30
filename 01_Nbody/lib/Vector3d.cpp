#include <cmath>
#include <iostream>
#include "Vector3d.hpp"

    // Constructors
    Vector3d::Vector3d() : x(0), y(0), z(0) {}
    Vector3d::Vector3d(double x, double y, double z) : x(x), y(y), z(z) {}

    

    // Member functions
    double Vector3d::magnitude() const {
        return std::sqrt(x * x + y * y + z * z);
    }

    Vector3d Vector3d::normalize() const {
        double mag = magnitude();
        return Vector3d(x / mag, y / mag, z / mag);
    }

    // Operator overloading
    Vector3d Vector3d::operator+(const Vector3d& other) const {
        return Vector3d(x + other.x, y + other.y, z + other.z);
    }

    Vector3d Vector3d::operator-(const Vector3d& other) const {
        return Vector3d(x - other.x, y - other.y, z - other.z);
    }

    Vector3d Vector3d::operator*(double scalar) const {
        return Vector3d(x * scalar, y * scalar, z * scalar);
    }

    Vector3d Vector3d::operator/(double scalar) const {
        return Vector3d(x / scalar, y / scalar, z / scalar);
    }