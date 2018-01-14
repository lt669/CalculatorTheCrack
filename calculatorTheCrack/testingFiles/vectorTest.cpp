#include <iostream>
#include <array>
#include <iterator>
#include <vector>
using namespace std;

int * arrayFunction(int);

int main()
{
	vector<int> x;
	int i = 1;
	x = vecFunction(1234);
	cout << "x["<< i << "][0] = " << x[i] << endl;

}

vetor<int> vecFunction (int y){
	vector<int> vec;
	vec.reserve(10);
	vec.push_back(y);
	return vec;
}