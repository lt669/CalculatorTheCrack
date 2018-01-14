//
//  lt_maths.cpp
//  calculatorTheCrack
//
//  Created by lewis thresh on 29/12/2017.
//  Copyright © 2017 lewis thresh. All rights reserved.
//

#include "lt_maths.hpp"
#include <iostream>
#include <array>
#include <vector>
using namespace std;

int c_plus(int x, int y)
{
    return y + x;
}

int c_minus(int x, int y)
{
    return y - x;
}

int c_times(int x, int y)
{
    return y * x;
}

int c_divide(int x, int y)
{
    return y / x;
}

vector<int> calcNumberLength(int y)
{
	/* number[0] = length of number */
	int z = 1;
	int x = y;
	int units = 1;
	int tempNumber = y;

	// Calculate length of the number (units)
	while (x > 10)
	{
		z = z * 10;
		x = y / z;
		units = units + 1;
	}

//	// Split the number into an array
//    static int *number;
//    number = new int[units+1]; // allocate memory for array of size 'units' + 1
//    number[0] = units; // Length of number

    // Use vector instead
    vector<int> number;
    number.push_back(units); // number[0] = units
    int expo = units - 1;
    
	for (int k=1; k<units+1; k++){
        number.push_back(floor(tempNumber/pow(10,(expo-(k-1)))));
		if (k < units)
		{
			tempNumber = tempNumber - (number.at(k) * pow(10,expo-(k-1)));
		}
	}
    
    //cout << "&number: " << &number << endl;
    
    return number;
}

int c_shiftL(int y)
{
	// Return array of split y
    //int * nArr;
    vector<int> nArr;
    nArr = calcNumberLength(y);
    cout << "&nArr: " << &nArr << endl;

	// Shift values in the array
	int len = nArr[0];
    int maxVal = nArr[1];
	// Create output array of correct size
	int outArray[len];
    
	for (int i=0;i<len-1;i++){
        outArray[i] = nArr[i+2] * pow(10,((len-1)-i));
	}
    outArray[len-1] = maxVal;
    
    int sum = 0;
    // Sum all elements in the array
    for (int i=0;i<len;i++){
        sum += outArray[i];
    }

    // Free memory used for number array
    


   return sum;
}