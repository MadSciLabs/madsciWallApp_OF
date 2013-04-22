//
//  Header.h
//  madsciWall
//
//  Created by adam lassy on 4/21/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#ifndef sampleLayer2_Header_h
#define sampleLayer2_Header_h

#include "madsciWallLayer.h"

//Make layers inherit WallLayer Base
class sampleLayer2 : public madsciWallLayer {
    
public:

    int color;
    int count;
    int radius;

    ofVec2f * arrLoc;
    ofVec2f vSpeed;
    
    ~sampleLayer2();
    sampleLayer2();
    sampleLayer2(string _name, int _color, int _count, int _radius);
    
    virtual void setup();
    virtual void update();
    virtual void draw();
};

#endif
