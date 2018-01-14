#include <iostream>
#include <array>
#include <iterator>
#include <vector>
using namespace std;

int * arrayFunction(int);

int main()
{
	int x = 1234;
	array<int,6> myarray;
	myarray.fill(x);
	
	int arr [] = {x};
	arr[1] = 2;
	arr[2] = 33;
	int v = 2;

	cout << "arr: [" << v << "]: " << arr[v] << endl;
	
	// for (int i=0;i < myarray.size();++i)
	// {
	// 	cout << "array: [" << i << "]: " << myarray[i] << endl;
	// }q
	// return 0;
}

int * arrayFunction (int y){
	int funcArray [] = {1234};

	return funcArray;
}