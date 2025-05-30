#include <iostream>
using namespace std;

class Vec2 {
  float x_, y_;

 public:
  Vec2(float x = 0.0f, float y = 0.0f) : x_(x), y_(y) {}

  void output(const string& msg) const {
    cout << msg << x_ << " " << y_ << endl;
  }

  void set(float x, float y) {
    x_ = x;
    y_ = y;
  }
  void set(const Vec2& v) {
    x_ = v.x_;
    y_ = v.y_;
  }
  void offset(const Vec2& v) {
    x_ += v.x_;
    y_ += v.y_;
  }
  void offset(float d) {
    x_ += d;
    y_ += d;
  }
  Vec2 operator+(const Vec2& v) const {
	return Vec2(x_ + v.x_, y_ + v.y_);
  }
};

int main() {
  Vec2 pos1(1.5f, 2.5f);
  Vec2 pos2;
  // set()�ő��
  pos2.set(10.5f, 22.2f);
  pos2.output("1�F");
  // ���̕ϐ�����R�s�[
  Vec2 pos3;
  pos3.set(pos2);
  pos3.output("2�F");
  // �I�t�Z�b�g
  pos1.offset(Vec2(10.0f, 0.5f));
  pos1.output("3�F");
  // �S�ăI�t�Z�b�g
  pos2.offset(2.0f);
  pos2.output("4�F");

  pos1.set(10.0f, 20.0f);
  pos2.set(5.0f, 7.0f);
  pos3 = pos1 + pos2;  
  pos3.output("5�F");
}