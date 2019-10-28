#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //    control our noise
    ofSeedRandom(1000);
//    white background
    ofBackground(255);
//    create line variable to use it anywhere else
    float lineSy;
    
//a loop that will draw
    for (int i = 0; i < ofGetWindowHeight(); i= i + 10){
        
        // blue horizontal lines
        ofSetColor(128, 128, 217);
        ofSetLineWidth(5);
        ofDrawLine(0, i + 5, ofGetWindowWidth(), i + 5);
    }
//    When I add a new loop, I write something over the last loop
    
    for (int i = 0; i < ofGetWindowWidth(); i= i + 10) {
        
        // black vertical lines
        ofSetColor(0);
        ofSetLineWidth(5);
        //we assign lineSy with the value from ofNoise, we divide lineSx to see it and we multiply to amplify it.
        lineSy = ofNoise(i/250.0)* mouseX;
        ofDrawLine(i, lineSy, i + 5, ofGetWindowWidth());
        
        //white lines stepping over blue lines
        ofSetColor(255);
        ofSetLineWidth(5);
        ofDrawLine(i + 5, lineSy, i + 10, ofGetWindowWidth());
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
