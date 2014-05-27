//
//  Bear.cpp
//  Pj10
//
//  Created by Madhav Chhura on 3/7/14.
//  Copyright (c) 2014 Madhav Chhura. All rights reserved.
//

#include "Bear.h"
#include "ZooAnimal.cpp"
#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;

void Bear::food_intake (double food_weight)
{
    if(food_weight >= 100){
        weight += 10;
    }
    
    
}

struct upper{
    int operator()(int c)
    {
        return toupper((unsigned char)c);
    }
}

string Bear::where()
{
    transform(location.begin(), location.end(), location.begin(), upper());
    return location;
}

