#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    font.load("framd.ttf", 100, true, true, true);
    // no funcionó font.load("FuckboiSansbyMrKrazyMan.ttf", 100, true, true, true);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofEnableDepthTest();
    
    ofBackground(0);
    
    cam.begin();
    
    ofPushMatrix();
    ofScale(1,-1,1);
    
    ofDrawAxis(100);
    ofSetColor(235, 151, 232);
    
    
    vector < ofPath > paths =
    font.getStringAsPoints("ART IN");
    for (int i = 0; i < paths.size(); i++){
        //      no funcionó  float x = ofMap(sin(ofGetElapsedTimef()),-1,1,0,800);
        paths[i].draw();
    }
    
    
    
    //font.drawStringAsShapes("hello",0,0);
    ofPushMatrix();
    ofRotateYDeg(60);
    ofSetColor(36, 83, 201);
    
    
    paths =
    font.getStringAsPoints("CIVIC");
    for (int i = 0; i < paths.size(); i++){
        paths[i].draw();
    }
    
    ofPopMatrix();
    
    //font.drawStringAsShapes("hello",0,0);
    ofPushMatrix();
    ofRotateYDeg(120);
    ofSetColor(72, 247, 250);
    
    
    paths =
    font.getStringAsPoints("SCALE");
    for (int i = 0; i < paths.size(); i++){
        paths[i].draw();
    }
    
    ofPopMatrix();
    
    ofPopMatrix();
    cam.end();
    
    
    //font.drawString("hello",300,300);
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
