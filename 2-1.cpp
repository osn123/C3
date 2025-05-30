#include <iostream>

using namespace std;

class Wallet {
  int yen_;

 public:
  Wallet(int yen) { yen_ = yen; }

  void payment(int yen) {
    yen_ -= yen;
  }

  int yen() const { return yen_; }

  void receive(int yen) {
    yen_ += yen;
  }
};

int main() {
  Wallet wallet(50);    //
  wallet.receive(100);  //
  wallet.payment(20);   //
  cout << "à•z‚ÌŽc‚: " << wallet.yen() << "‰~" << endl;
}