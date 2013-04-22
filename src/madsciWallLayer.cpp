//
//  wallLayer.cpp
//  madsciWall
//
//  Created by adam lassy on 4/16/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#include "madsciWallLayer.h"

madsciWallLayer::madsciWallLayer() {}
madsciWallLayer::~madsciWallLayer() {

    cerr << "Layer Destructor" << endl;
}

madsciWallLayer::madsciWallLayer(string _name) {

    layer_name = _name;
}

void madsciWallLayer::setup() {}

void madsciWallLayer::update() {}

void madsciWallLayer::draw() {}
