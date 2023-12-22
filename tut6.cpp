#include <iostream>


class Shape {
public:
    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }

protected:
    int width;
    int height;
};


class Rectangle : public Shape {
public:
    int getArea() {
        return width * height;
    }
};

int main() {
    Rectangle rectangle;

    
    rectangle.setWidth(5);
    rectangle.setHeight(10);

    int area = rectangle.getArea();

    std::cout << "Area of the rectangle: " << area << std::endl;

    return 0;
}
