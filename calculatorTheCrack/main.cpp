//
//  main.cpp
//  calculatorTheCrack
//
//  Created by lewis thresh on 29/12/2017.
//  Copyright © 2017 lewis thresh. All rights reserved.
//
// Added Comment line on shiftFunctionDev Branch

#include <iostream>
#include "lt_maths.hpp"
#include <array>
using namespace std;
int main(int argc, const char * argv[])
{

    int testVal = 56789;
    // Test shifting sub-functions
    //int *e;
    vector<int> e;
    e = calcNumberLength(testVal);
    //cout << "pointer: " << *(e+1)<< endl;
    cout << "pointer: " << e[0]<< endl;
    
    int total = c_shiftL(testVal);
    cout << "Answer Left: " << total<< endl;
    
    total = c_shiftR(testVal);
    cout << "Answer Right: " << total<< endl;
    
    
    
    // Playing with pointers
    
//    int x = 2;
//    int * foo = &x;
//    int y = foo;
//    
//    cout << "x: " << x << endl;
//    cout << "foo: " << foo << endl;
//    cout << "y: " << y << endl;

    
    return 0;
}