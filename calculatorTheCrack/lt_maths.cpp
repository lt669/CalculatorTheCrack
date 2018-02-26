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

int c_plus(int x, int y){
    return y + x;
}

int c_minus(int x, int y){
    return y - x;
}

int c_times(int x, int y){
    return y * x;
}

int c_divide(int x, int y){
    return y / x;
}

int c_inverse(int y){
    return y * -1;
}

int c_pow(int x, int y){
    return pow(y,x);
}

int c_replace(int x, int z, int y){
    // Replace any number in y that is x with z
    
    
    // Determine sign of the input number
    bool positive;
    
    if (y < 0){
        positive = false;
        y = y * -1;
    } else {
        positive = true;
    }
    
    // Split input into an array
    vector<int> nArr;
    nArr = calcNumberLength(y);
    int len = nArr[0];
    // Create output vector
    vector<int> outArray(len);
    
    // Scan through array, look for matching numbers and replace
    for(int i=1;i<len+1;i++){
        if(nArr[i] == x){
            outArray[i-1] = z;
        } else {
            outArray[i-1] = nArr[i];
        }
    }
    
    // Sum array to create output number
    int sum = 0;
    // Sum all elements in the array
    for (int i=0;i<len;i++){
        sum += outArray[i] * pow(10,(len-1)-i);
    }
    
    // Correct sign if required
    if(positive == false){
        sum = sum * -1;
    }
    
    
    return sum;
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

    // Use vector auto memory allocation management
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

    return number;
}

int c_shiftL(int y)
{
    // Determine sign of the input number
    bool positive;
    
    if (y < 0){
        positive = false;
        y = y * -1;
    } else {
        positive = true;
    }
    
	// Return array of split y
    vector<int> nArr;
    nArr = calcNumberLength(y);

	// Shift values in the array
	int len = nArr[0];
    int maxVal = nArr[1];
    
    // Determine sign of number
    
    
	// Create output array of correct size
    vector<int> outArray;
    
	for (int i=0;i<len-1;i++){
        outArray.push_back(nArr[i+2] * pow(10,((len-1)-i)));
	}
    //outArray[len-1] = maxVal;
    outArray.insert(outArray.begin()+len-1, maxVal);
    
    int sum = 0;
    // Sum all elements in the array
    for (int i=0;i<len;i++){
        sum += outArray[i];
    }
    
    // Correct sign if required
    if(positive == false){
        sum = sum * -1;
    }
    
   return sum;
}

int c_shiftR(int y){
    
    // Determine sign of the input number
    bool positive;
    
    if (y < 0){
        positive = false;
        y = y * -1;
    } else {
        positive = true;
    }
    
    // Return array of split y
    vector<int> nArr;
    nArr = calcNumberLength(y);
    
    // Shift values in the array
    int len = nArr[0];
    int minVal = nArr[len];
    
    // Create output array of correct size
    vector<int> outArray(len);
    
    // Shifting loop
    for(int i=len-1;i>0;i--){
        outArray[i] = nArr[i] * (pow(10,((len-1)-i)));
    }
    // Wrap min value around to max value
    outArray[0] = minVal * pow(10,len-1);
    
    int sum = 0;
    // Sum all elements in the array
    for (int i=0;i<len;i++){
        sum += outArray[i];
    }
    
    // Correct sign if required
    if(positive == false){
        sum = sum * -1;
    }
    
    return sum;
}

