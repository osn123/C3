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
		//cout << "���l����";
		cin >> in;
		if (in != 0){
			nums.push_back (in);
		}
	} while (in != 0);
	cout << "������:" << nums.size () << endl;

	for (auto i : nums)sum += i;
	cout << "���v�_:" << sum << endl;

	avr = (float)sum / nums.size ();
	cout << "���ϓ_:" << avr << endl;
}

