#include <iostream>
using namespace std;

class  Vec2{
  int x_, y_;
 public:
  int getX() const { return x_; }
  int getY() const { return y_; }
  void setX(int x) { x_ = x; }
  void setY(int y) { y_ = y; }
};

int main() { 
	Vec2 v;
	v.setX(10);
	v.setY(20);	
	cout << "X: " << v.getX() << ", Y: " << v.getY() << endl;	
}