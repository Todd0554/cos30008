//
//  Vector3D_PS1.cpp
//  problemset1
//
//  Created by Xinzhe Yu on 23/3/2025.
//
#include <iomanip>
#include "Vector3D.h"
#include <sstream>

bool Vector3D::operator==(const Vector3D &aOther) const noexcept{
    // check the difference of x, y and w between 'this' and aother vector
    return this->x() - aOther.x() < std::numeric_limits<float>::epsilon() && std::fabs(this->y() - aOther.y()) < std::numeric_limits<float>::epsilon() && std::fabs(this->w() - aOther.w()) < std::numeric_limits<float>::epsilon();
}

std::string Vector3D::toString() const noexcept{
    // define a stringtream called result as the container to hold the string
    std::stringstream result;
    result << "[" << this -> x() << "," << this -> y() << "," << this -> w() << "]";
    return result.str();
}



