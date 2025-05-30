#include <iostream>
using namespace std;

class Object {
  static int uid_;
  int id_;

 public:
  Object() : id_(++uid_) {}
  int id() const { return id_; }
  static int uid() { return uid_; }
};

int Object::uid_ = 0;

int main() {
  Object a, b, c;
  cout << "生成したオブジェクト数" << Object::uid() << endl;
  cout << a.id() << b.id() << c.id() << endl;
}