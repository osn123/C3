#include <iostream>
using namespace std;

class Vec2 {
  float _x;
  float _y;

 public:
  Vec2() {
    _x = 0;
    _y = 0;
  }
  Vec2(float x_,float y_) :_x(x_), _y(y_) {}

  int x() { return _x; }
};

int main() {
  Vec2 pos1(1.0f, 2.5f);
  Vec2 pos2;
  cout << pos1.x() << endl;
  cout << pos2.x() << endl;
}