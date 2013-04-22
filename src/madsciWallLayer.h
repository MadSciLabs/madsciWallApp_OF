//
//  wallLayer.h
//  madsciWall
//
//  Created by adam lassy on 4/16/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#ifndef madsciWall_madsciWallLayer_h
#define madsciWall_madsciWallLayer_h

#include "ofMain.h"

class madsciWallLayer {

public:

    string layer_name;

    ~madsciWallLayer();
    madsciWallLayer();
    
    madsciWallLayer(string _name);

    //Declaring functions Virtual allows them to be written over in the inheriting layer class
    virtual void setup();
    virtual void update();
    virtual void draw();
};

#endif
