#include <iostream>
#include <array>
#include <iterator>
#include <vector>
using namespace std;

int * arrayFunction(int);

int main()
{
	int *x;
	int i = 1;
	x = arrayFunction(1234);
	cout << "x["<< i << "][0] = " << x[i][0] << endl;
	cout << "x[0][1] = " << x[0][1] << endl;

}

int * arrayFunction (int y){
	static int funcArray [2][2] = {{y},{0}};
	
	funcArray[1][0] = 9876;
	funcArray[0][1] = 5;

	return funcArray;
}