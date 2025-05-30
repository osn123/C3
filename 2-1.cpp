#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class wallet {
  int yen_;

 public:
  wallet(int yen) { yen_ = yen; }

  void payment(int yen) {
    yen_ -= yen;
  }

  int yen() const { return yen_; }

  void receive(int yen) {
    yen_ += yen;
  }
};

int main() {
  wallet wallet(50);    //
  wallet.receive(100);  //
  wallet.payment(20);   //
  cout << "à•z‚ÌŽc‚: " << wallet.yen() << "‰~" << endl;
}