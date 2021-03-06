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
  ofBackground(0, 0, 0);

  ofDrawBitmapString(ofToString(mouseX) + " – " + ofToString(mouseY), 20, 20);
  ofDrawBitmapString(ofToString(n), 80, 20);

  ofTranslate(ofGetWidth() / 2,  ofGetHeight() / 2);
  
  if (n > max || n < 0) {
    diff = diff * -1;
  }
  

  renderBoxes(n);
  n += diff;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
  switch(key){
    case 'q':
      return exit();
      //    case '2':
      //      return color = ofSetColor(200, 120, 125);
  }
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
