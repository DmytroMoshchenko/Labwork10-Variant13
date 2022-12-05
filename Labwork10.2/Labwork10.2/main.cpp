#include <iostream>
#include <cmath>
// Write point struct
struct Point {
    int x;
    int y;

    // Define a member function
    void print() const {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }

    // Define a member function (to calculate distance)
    double distance(Point p) const {
        double dx = x - p.x;
        double dy = y - p.y;
        return sqrt(dx * dx + dy * dy);
    }

    // Define a member function (to calculate distance)
    double distance(Point const* p) const {
        double dx = x - p->x;
        double dy = y - p->y;
        return sqrt(dx * dx + dy * dy);
    }
};

// Triangle struct (with 3 points)
struct Triangle {
    Point p1;
    Point p2;
    Point p3;

    // Define a member function
    void print() const {
        std::cout << "Triangle: ";
        p1.print();
        p2.print();
        p3.print();
    }

    // Define a member function (to calculate perimeter)
    double perimeter() const {
        return p1.distance(p2) + p2.distance(p3) + p3.distance(p1);
    }


    // Getters and setters
    Point getP1() const { return p1; }
    Point getP2() const { return p2; }
    Point getP3() const { return p3; }

    void setP1(Point p) { p1 = p; }
    void setP2(Point p) { p2 = p; }
    void setP3(Point p) { p3 = p; }

    // Define a member function (to calculate perimeter)
    double perimeter2() const {
        return p1.distance(&p2) + p2.distance(&p3) + p3.distance(&p1);
    }


    double height() const {
        double a = p1.distance(p2);
        double b = p2.distance(p3);
        double c = p3.distance(p1);
        double p = (a + b + c) / 2;
        return 2 * sqrt(p * (p - a) * (p - b) * (p - c)) / a;
    }

    double median() const {
        double a = p1.distance(p2);
        double b = p2.distance(p3);
        double c = p3.distance(p1);
        double p = (a + b + c) / 2;
        return sqrt(2 * p * (p - b) * (p - c) / (a));
    }
};

int main() {
    int i = 13;
    Point a = { 0, 0 };
    Point b = { i, i - 1 };
    Point c = { i, i };

    Triangle t = { a, b, c };

    t.print();

    std::cout << "Perimeter: " << t.perimeter() << std::endl;

    std::cout << "Median: " << t.median() << std::endl;

    std::cout << "Height: " << t.height() << std::endl;
}