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
  int x() { return static_cast<int>(_x);
  }
};

int main() { 
	Vec2 pos;
  cout << pos.x();
}