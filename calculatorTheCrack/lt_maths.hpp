//
//  lt_maths.hpp
//  calculatorTheCrack
//
//  Created by lewis thresh on 29/12/2017.
//  Copyright © 2017 lewis thresh. All rights reserved.
//

#ifndef lt_maths_hpp
#define lt_maths_hpp

#include <stdio.h>
#include <math.h>
#include <vector>

int c_plus(int,int);
int c_minus(int,int);
int c_times(int, int);
int c_divide(int, int);
//int * calcNumberLength(int);
std::vector<int> calcNumberLength(int);
int c_shiftL(int);
int c_shiftR(int);
int c_inverse(int);
int c_pow(int,int);

#endif /* lt_maths_hpp */
