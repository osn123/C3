#include <iostream>
using namespace std;

class Integer {
  int value_;

 public:
  Integer(int value) : value_(value) {}

  void output() const { cout << value_ << endl; }

  Integer& operator+=(int value) {
    value_ += value;
    return *this;
  }
  friend void operator>>(int value , Integer& obj);//friendŽg‚¤ê‡
};

void operator>>(int value , Integer& obj)
{
    obj.value_ = value;
}

int main() {
    Integer obj(0);
  100 >> obj;
    obj += 10;
    obj.output();
}
//