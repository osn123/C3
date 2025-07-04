#include <iostream>

using namespace std;

class Month {
  int m_;

 public:
  int getMonth() const { return m_; }

  string getMonthName() const {  // 月を英語で取得
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
        return "Invalid month";  // 無効な月の場合
    }
  }
  void input() {  // 月を入力
    cout << "月を入力してください(1-12): ";
    cin >> m_;
    while (m_ < 1 || m_ > 12) {
      cout << "月を入力してください(1-12): ";
      cin >> m_;
    }
  }
};

int main() {
  Month m;
  m.input();
  cout << m.getMonth() << "月は" << m.getMonthName() << endl;
}