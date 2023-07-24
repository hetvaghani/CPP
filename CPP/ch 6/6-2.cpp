#include <iostream>
using namespace std;


class Shape {
public:
    virtual double calculate() const = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double calculate() const override {
        return 3.14159 * radius * radius;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double calculate() const override {
        return 0.5 * base * height;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double calculate() const override {
        return width * height;
    }
};

int main() {
    Circle circle(5);
    Triangle triangle(4, 3);
    Rectangle rectangle(6, 8);

    Shape* shapePtr;

    shapePtr = &circle;
    std::cout << "Area of circle: " << shapePtr->calculate() << std::endl;

    shapePtr = &triangle;
    std::cout << "Area of triangle: " << shapePtr->calculate() << std::endl;

    shapePtr = &rectangle;
    std::cout << "Area of rectangle: " << shapePtr->calculate() << std::endl;

    return 0;
}

