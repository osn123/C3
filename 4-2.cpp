#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Shape {
public:
	virtual void outputArea() = 0; // 
	virtual ~Shape() {
		cout << "destractor " << "";
	}
};

class Rectangle : public Shape {
	int width, height;
public:
	Rectangle(int w, int h) : width(w), height(h) {}
	void outputArea() override {
		cout << width * height << endl;
	}
};

class Triangle : public Shape {
	int base, height;
public:
	Triangle(int b, int h) : base(b), height(h) {}
	void outputArea() override {
		cout << 0.5 * base * height << endl;
	}
};

class Ellipse : public Shape {
	int majorAxis, minorAxis;
public:

	Ellipse(int a, int b) : majorAxis(a), minorAxis(b) {}
	void outputArea() override {
		cout << fixed << setprecision(3) << Math.pi * majorAxis * minorAxis << endl;
	}
};

class Circle : public Shape {
	float radius;
public:

	Circle(int r) : radius(r) {}
	void outputArea() override {
		cout << fixed << setprecision(3) << 3.14 * radius * radius << endl;
	}
};

int main() {
	vector<Shape*> shapes;
	shapes.push_back(new Rectangle(10, 20));
	shapes.push_back(new Triangle(10, 20));
	shapes.push_back(new Ellipse(10, 20));
	shapes.push_back(new Circle(10));

	for (const auto& shape : shapes)
	{
		shape->outputArea();
	}
	cout << endl;


	for (const auto& shape : shapes)
	{
		delete shape; // delete the dynamically allocated objects
	}
}

