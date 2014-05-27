//
//  ZooAnimal.cpp
//  Pj10
//
//  Created by Madhav Chhura on 3/7/14.
//  Copyright (c) 2014 Madhav Chhura. All rights reserved.
//

#include "ZooAnimal.h"
#include <string>
using namespace std;

class ZooAnimal{
protected:
    string name, location;
public:
    ZooAnimal()
    {
        name = "ZooAnimal";
        location = "Zoo";
    }
    
    string who() const
    {
        return name;
    }
    
    virtual string where();
};
