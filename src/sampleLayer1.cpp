//
//  File.cpp
//  madsciWall
//
//  Created by adam lassy on 4/21/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#include "sampleLayer1.h"

sampleLayer1::~sampleLayer1() {

    cerr << "Kill Layer " << layer_name << endl;
    delete[] arrPoints;
}

sampleLayer1::sampleLayer1() {

}

sampleLayer1::sampleLayer1(string _name, int _color, int _count, int _radius) : madsciWallLayer(_name)
{

    color = _color;
    count = _count;
    radius = _radius;
    
    arrPoints = new ofPoint[count];
    
    for (int i=0; i<count; i++)
    {
        arrPoints[i].set(ofRandomWidth(), ofRandomHeight());
    }
}

void sampleLayer1::setup() {
    
    
}

void sampleLayer1::update() {
    
}

void sampleLayer1::draw() {    

    ofSetHexColor(color);

    for (int i=0; i<count; i++)
    {
        ofCircle(arrPoints[i], radius);
    }
}
