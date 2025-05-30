#include <iostream>
#include <vector>
using namespace std;

class Vec2 {
  int x_, y_;

 public:
  Vec2(int x = 0, int y = 0) : x_(x + y) , y_(y){}

  Vec2(const Vec2& other) : x_(other.x_), y_(other.y_) {}

  void output() const { cout << x_ << endl; }
};

int main() {
  vector<Vec2> pos;
  pos.push_back(Vec2(1, 2));
  pos.push_back(Vec2(7));
  pos.push_back(Vec2());
  for (const Vec2& p : pos) {
    p.output();
  }
}