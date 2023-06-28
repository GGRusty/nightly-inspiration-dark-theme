/**
 * This is a multi-line comment.
 */

#include<iostream> // This is a single-line comment.
#include<vector>
#include<string>

#define PI 3.14

std::string greeting = "Hello, World!";

void greet(std::string name) {
    std::cout << greeting + " " + name + ".";
}

class Circle {
    float radius;
public:
    Circle(float r) : radius(r) {}
    float getArea() {
        return PI * radius * radius;
    }
};

int main() {
    Circle myCircle(5);

    std::vector<int> vec = {1, 2, 3, 4, 5};

    if (myCircle.getArea() > 20) {
        std::cout << "Large circle.\n";
    } else {
        std::cout << "Small circle.\n";
    }

    for (const auto &i : vec) {
        std::cout << i << "\n";
    }

    return 0;
}
