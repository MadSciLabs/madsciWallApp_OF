//
//  wallLayer.cpp
//  madsciWall
//
//  Created by adam lassy on 4/16/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#include "madsciWallLayer.h"

madsciWallLayer::madsciWallLayer() {}
madsciWallLayer::~madsciWallLayer() {}

madsciWallLayer::madsciWallLayer(string _name) {

    layer_name = _name;
    layer_width = ofGetWidth();
    layer_height = ofGetHeight();
}

void madsciWallLayer::setup() {}

void madsciWallLayer::update() {}

void madsciWallLayer::draw() {}
