#pragma once

#include "ofMain.h"
#include "madsciWallLayer.h"
#include "ofxSpacebrew.h"
#include "constants.h"

//Include our Layer classes
#include "sampleLayer1.h"
#include "sampleLayer2.h"


class madsciWallApp : public ofBaseApp{
	public:

		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

        //Layer function
        void releaseLayers();
        void setLayers(int layerIndex);

        //Spacebrew
        Spacebrew::Connection spacebrew;
        void onMessage( Spacebrew::Message & m );

        //Vector of Layers
        std::vector<madsciWallLayer*> vectorLayers;
        vector<madsciWallLayer*>::iterator layerIterator;
};
