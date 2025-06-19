#include <iostream>

using namespace std;

class Month {
  int m_;

 public:
  int getMonth() const { return m_; }

  string getMonthName() const {  // Œ‚ğ‰pŒê‚Åæ“¾
    switch (m_) {
      case 1:
        return "January";
      case 2:
        return "February";
      case 3:
        return "March";
      case 4:
        return "April";
      case 5:
        return "May";
      case 6:
        return "June";
      case 7:
        return "July";
      case 8:
        return "August";
      case 9:
        return "September";
      case 10:
        return "October";
      case 11:
        return "November";
      case 12:
        return "December";
      default:
        return "Invalid month";  // –³Œø‚ÈŒ‚Ìê‡
    }
  }
  void input() {  // Œ‚ğ“ü—Í
    cout << "Œ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(1-12): ";
    cin >> m_;
    while (m_ < 1 || m_ > 12) {
      cout << "Œ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(1-12): ";
      cin >> m_;
    }
  }
};

int main() {
  Month m;
  m.input();
  cout << m.getMonth() << "Œ‚Í" << m.getMonthName() << endl;
}