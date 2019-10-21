#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    ofNoFill();

    
    float xorig = ofGetWidth() / 2;
    float yorig = ofGetHeight() / 2;
    float radius = 200;
    float angle = ofGetElapsedTimef();

    
    
    for (int i = 0; i < 15; i++) {
        
        float x = xorig + radius * cos(angle + i * 0.2);
        float y = yorig + radius * sin(angle + i * 0.2);
        
        ofDrawTriangle(x, y,
                       x - 10 * i, y + 15 * i,
                       x + 10 * i, y + 15 * i);
        
//        ofDrawCircle(x, y, sin(ofGetElapsedTimef()) * (i * 20));
        
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
