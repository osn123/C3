#include <iomanip>  // 
#include <iostream>

using namespace std;

class Length {
  float mm_;

 public:
  float cm() const { return mm_ / 10; }
  float km() const { return mm_ / 1000000; }
  Length(float mm) : mm_(mm) {}
  float m() const { return mm_ / 1000; }
  float mm() const { return mm_; }
};

ostream& format(ostream& o) {
  o << fixed << setprecision(2);
  return o;
}

int main() {
  float input;
  cout << "’·‚³‚ðƒ~ƒŠƒ[ƒgƒ‹‚Å“ü—Í: ";
  cin >> input;
  Length distance(input);
  cout << format << distance.mm() << "mm‚Í" << endl;
  cout << format << distance.cm() << "cm" << endl;
  cout << format << distance.m() << "m" << endl;
  cout << format << distance.km() << "km" << endl;
}