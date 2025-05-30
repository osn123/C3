#include <iostream>
#include <vector>

using namespace std;

//using nums = vector<int>;
vector<int> nums;

int main ()
{
	int in , sum (0);
	float avr{0};

	do{
		//cout << "数値入力";
		cin >> in;
		if (in != 0){
			nums.push_back (in);
		}
	} while (in != 0);
	cout << "総件数:" << nums.size () << endl;

	for (auto i : nums)sum += i;
	cout << "合計点:" << sum << endl;

	avr = (float)sum / nums.size ();
	cout << "平均点:" << avr << endl;
}

