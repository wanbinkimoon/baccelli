//
//  renderBoxes.cpp
//  geometry_basics
//
//  Created by nicola bertelloni on 31/07/2018.
//

#include "ofApp.h"

void ofApp::renderBoxes(int n){
  float time = ofGetElapsedTimef();
  float side = 0;
  
  for (int i = 0; i < n; ++i) {
    float a = i * 137.5;
    float r = c * sqrt(i);
    float x = r * cos(a);
    float y = r * sin(a);
    float z = i / 10;
    
    float side = ofMap(i, 0, max, 10, 20);
    
    int red = i;
    int green = ofMap(i, 0, max, 100, 200);
    ofSetColor(red, green, 200);
    
    ofPushMatrix();
    ofRotateYDeg(mouseX);
    ofRotateXDeg(mouseY);

    ofDrawBox(x, y, z, side, side, side);
    ofPopMatrix();
  }
}
