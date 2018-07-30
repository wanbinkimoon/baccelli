//
//  renderBoxes.cpp
//  geometry_basics
//
//  Created by nicola bertelloni on 31/07/2018.
//

#include "ofApp.h"

void ofApp::renderBoxes(int n){
  float time = ofGetElapsedTimef();
  float side = 10;
  
  for (int i = 0; i < n; ++i) {
    float a = i * 137.5;
    float r = c * sqrt(i);
    float x = r * cos(a);
    float y = r * sin(a);
    
    float side = i;
    
    int red = i;
    ofSetColor(red, 120, 200);
    
    ofPushMatrix();
    ofRotateYDeg(mouseX);
    ofRotateXDeg(mouseY);
    ofDrawBox(x, y, 0, side, side, side);
    ofPopMatrix();
    
  }
}
