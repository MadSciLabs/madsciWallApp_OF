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

    //Must set initial size as size() will change
    int vSize = vectorLayers.size();
    for (unsigned i=0; i<vSize; ++i)
    {
        vectorLayers.pop_back();
    }
}

void madsciWallApp::setLayers(int layerIndex) {

    //Release layers, however need some memory management here
    releaseLayers();

    //SET LAYERS
    switch (layerIndex) {
        
        case 1:
            
            vectorLayers.push_back(new sampleLayer1("2-a", 0x000099, 15, 50));
            vectorLayers.push_back(new sampleLayer2("2-b", 0x000066, 10, 30));
            break;

        case 2:

            vectorLayers.push_back(new sampleLayer2("1-a", 0x006600, 20, 20));
            vectorLayers.push_back(new sampleLayer1("1-b", 0x009900, 10, 30));
            break;
            
        case 3:
        default:

            vectorLayers.push_back(new sampleLayer2("3-a", 0x660000, 25, 60));
            vectorLayers.push_back(new sampleLayer1("3-b", 0x990000, 60, 25));
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

    if (key == '1'){
        setLayers(1);
    } else if (key == '2'){
        setLayers(2);
    } else if (key == '3'){
        setLayers(3);
    }
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