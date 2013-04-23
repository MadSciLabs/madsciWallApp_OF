//
//  Header.h
//  madsciWall
//
//  Created by adam lassy on 4/21/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#ifndef emptyLayer_Header_h
#define emptyLayer_Header_h

#include "madsciWallLayer.h"

//Make layers inherit WallLayer Base
class emptyLayer : public madsciWallLayer {
    
public:

    emptyLayer(string _name);
    
    virtual void setup();
    virtual void update();
    virtual void draw();
};

#endif
