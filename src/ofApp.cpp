#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofSetWindowShape(800, 800);
//  ofSetBackgroundAuto(false);
  ofBackground(0, 0, 0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  ofDrawBitmapString(ofToString(mouseX) + " – " + ofToString(mouseY), 20, 20);
  
  ofBackground(0, 0, 0);
  ofNoFill();

  ofSetLineWidth(3);
  
  ofTranslate(ofGetWidth() / 2,  ofGetHeight() / 2);
  
  float time = ofGetElapsedTimef();
  float side = 10;
  
  for (int i = 0; i < n; ++i) {
    float a = i * 137.5;
    float r = c * sqrt(i);
    float x = r * cos(a);
    float y = r * sin(a);
    
    int red = i;
    ofSetColor(red, 120, 200);
    
    ofPushMatrix();
      ofRotateYDeg(mouseX);
      ofRotateXDeg(mouseY);
      ofDrawBox(x, y, 0, side, side, side);
    ofPopMatrix();
  }
  
  ++n;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  switch(key){
    case 'q':
      return exit();
    case '2':
//      return color = ofSetColor(200, 120, 125);
  }
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
