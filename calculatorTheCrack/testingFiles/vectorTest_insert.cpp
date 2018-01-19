#include <iostream>
#include <array>
#include <iterator>
#include <vector>
using namespace std;

int * arrayFunction(int);

int main()
{
	vector<int> x (4,100);
	//x.insert(x.begin(),200);
	x[0] = 300;
	int i = 0;
	cout << "x["<< i << "] = " << x[i] << endl;

}