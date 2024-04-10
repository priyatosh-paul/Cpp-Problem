#include <iostream>

class Vector {
private:
    double x, y;

public:
    Vector(double _x = 0, double _y = 0) : x(_x), y(_y) {}

    // Overloading the '+' operator to add two vectors
    Vector operator+(const Vector& other) const {
        return Vector(x + other.x, y + other.y);
    }

    // Overloading the '-' operator to subtract two vectors
    Vector operator-(const Vector& other) const {
        return Vector(x - other.x, y - other.y);
    }

    // Overloading the '*' operator for scalar multiplication
    Vector operator*(double scalar) const {
        return Vector(x * scalar, y * scalar);
    }

    // Overloading the '*' operator for dot product
    double operator*(const Vector& other) const {
        return x * other.x + y * other.y;
    }

    // Overloading the '<<' operator for easy output
    friend std::ostream& operator<<(std::ostream& os, const Vector& vec) {
        os << "(" << vec.x << ", " << vec.y << ")";
        return os;
    }
};

int main() {
    Vector v1(1, 2);
    Vector v2(3, 4);

    Vector sum = v1 + v2;
    Vector diff = v1 - v2;
    Vector scaled = v1 * 2;
    double dot_product = v1 * v2;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << diff << std::endl;
    std::cout << "Scaled: " << scaled << std::endl;
    std::cout << "Dot product: " << dot_product << std::endl;

    return 0;
}
