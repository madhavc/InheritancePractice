//
//  Bear.h
//  Pj10
//
//  Created by Madhav Chhura on 3/7/14.
//  Copyright (c) 2014 Madhav Chhura. All rights reserved.
//

#ifndef __Pj10__Bear__
#define __Pj10__Bear__
#include "Bear.h"
#include "ZooAnimal.cpp"
#include <string>
#include <iostream>
using namespace std;

class Bear : public ZooAnimal{
protected:
    double weight;
public:
    Bear()
    {
        name = "bear";
        weight = 100.0;
    }
    
    void food_intake (double food_weight);
    
    void move (string new_location)
    {
        this->location = new_location;
    }
    double get_weight ()
    {
        return weight;
    }
    
    string where();

};
#endif /* defined(__Pj10__Bear__) */
