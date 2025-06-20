#include <iostream>
#include <vector>
using namespace std;

struct Employee {
    int no;
    string name;
    string department;
};

struct Manager : public Employee{
	vector<Employee*> group;
};

struct ParttimeJob : public Employee {
	int hourlyWage;
};
