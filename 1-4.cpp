#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class wallet {
  int yen_;

 public:
  wallet(int yen) { cout << "Wallet created with " << yen_ << " yen." << endl; }

  void payment(int yen) {
    cout << "Payment made with " << yen_ - yen << " yen." << endl;
  }

  int yen() const { return yen_; }

  void receive(int yen) {
    yen_ += yen;
    cout << "Received " << yen << " yen. Total now: " << yen_ << " yen."
         << endl;
  }
};

int main() {
  wallet wallet(50);
  wallet.receive(100);
  wallet.payment(20);
  cout << "à•z‚ÌŽc‚: " << wallet.yen() << "‰~" << endl;
}