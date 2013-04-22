//
//  File.cpp
//  madsciWall
//
//  Created by adam lassy on 4/21/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#include "sampleLayer2.h"

sampleLayer2::~sampleLayer2() {

    delete[] arrLoc;
}

sampleLayer2::sampleLayer2() {

}

sampleLayer2::sampleLayer2(string _name, int _color, int _count, int _radius) : madsciWallLayer(_name)
{

    color = _color;
    count = _count;
    radius = _radius;
    
    arrLoc = new ofVec2f[count];
    
    for (int i=0; i<count; i++)
    {
        arrLoc[i].set(ofRandomWidth(), ofRandomHeight());
    }
    
    vSpeed.set(ofRandomuf(),ofRandomuf());
}

void sampleLayer2::setup() {
    
    
}

void sampleLayer2::update() {
    
    for (int i=0; i<count; i++)
    {
        arrLoc[i] += vSpeed;
        
        if (arrLoc[i].x > ofGetScreenWidth()) {arrLoc[i].x -= ofGetScreenWidth();}
        if (arrLoc[i].y > ofGetScreenHeight()) {arrLoc[i].y -= ofGetScreenHeight();}

        //ofRect(arrPoints[i], radius, radius);
    }
}

void sampleLayer2::draw() {

    ofSetHexColor(color);

    for (int i=0; i<count; i++)
    {
        ofRect(arrLoc[i], radius, radius);
    }
}
