#include "madsciWallApp.h"

//--------------------------------------------------------------
void madsciWallApp::setup(){

    setLayers(1);    
}

//--------------------------------------------------------------
void madsciWallApp::update(){

    for (unsigned i=0; i<vectorLayers.size(); ++i)
    {
        //cerr << "WALL EACH UPDATE " << i << endl;
        vectorLayers[i]->update();
    }
}

//--------------------------------------------------------------
void madsciWallApp::draw(){

    //Clear Screen
    

    for (unsigned i=0; i<vectorLayers.size(); ++i)
    {
        vectorLayers[i]->draw();
    }
}

void madsciWallApp::releaseLayers() {

    for (unsigned i=0; i<vectorLayers.size(); ++i)
    {
        vectorLayers.pop_back();
    }
}

void madsciWallApp::setLayers(int layerIndex) {
    
    releaseLayers();
    
    //SET LAYERS
    switch (layerIndex) {

        case 2:
            
            vectorLayers.push_back(new sampleLayer1("ass"));
            vectorLayers.push_back(new sampleLayer1("butt"));
            break;

        case 3:

            vectorLayers.push_back(new sampleLayer1("one"));
            vectorLayers.push_back(new sampleLayer1("two"));
            break;

        case 1:
        default:

            vectorLayers.push_back(new sampleLayer1("three"));
            vectorLayers.push_back(new sampleLayer1("four"));
            break;
    }
    
    //Call Setup for each layer
    for (unsigned i=0; i<vectorLayers.size(); ++i)
    {
        cerr << vectorLayers[i]->layer_name << endl;
        vectorLayers[i]->setup();
    }

}


//--------------------------------------------------------------
void madsciWallApp::keyPressed(int key){

}

//--------------------------------------------------------------
void madsciWallApp::keyReleased(int key){

}

//--------------------------------------------------------------
void madsciWallApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void madsciWallApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void madsciWallApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void madsciWallApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void madsciWallApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void madsciWallApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void madsciWallApp::dragEvent(ofDragInfo dragInfo){ 

}