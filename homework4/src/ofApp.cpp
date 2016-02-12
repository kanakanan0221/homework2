#include "ofApp.h"
#include <iostream>
#include <math.h>


//--------------------------------------------------------------
void ofApp::setup(){
    ofSetLineWidth(1);
    ofSetCircleResolution(100);
   }

//--------------------------------------------------------------
void ofApp::update(){
    x = mouseX-ofGetWidth()/2;
    y = mouseY-ofGetHeight()/2;
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(255, 255, 255);
    
    ofSetColor(0,0,0);
    for (int i =0; i <ofGetHeight(); i++){
        ofLine(0, 30*i, 1024, 30*i);
    }
    for(int i = 0; i <ofGetWidth(); i++){
        ofLine(30*i, 0, 30*i, 768);
    }
    
    ofSetLineWidth(2);
    ofLine(0, mouseY, mouseX, mouseY);
    ofLine(mouseX, mouseY, 1024, mouseY);
    ofLine(mouseX, 0, mouseX, mouseY);
    ofLine(mouseX, mouseY, mouseX, 768);
  
    if(0<= atan2(y+PI*2,x+PI*2)*180/PI && atan2(y+2*PI,x+2*PI)*180/PI<=180){
        ofSetColor
        (ofColor::fromHsb(255-atan2(y+2*PI,x+2*PI)*255/PI/2,255,255));
        
    }else {
        ofSetColor
        (ofColor::fromHsb(-atan2(y+2*PI,x+2*PI)*180/PI/2,255,255));
        
    }
   
        cout << atan2(y,x/2)<<endl;
    
               ofFill();
               ofCircle(ofGetWidth()/2, ofGetHeight()/2,
                        sqrt( x*x + y*y)/4);
               ofNoFill();
               ofCircle(ofGetWidth()/2, ofGetHeight()/2, sqrt( x*x + y*y ));
               ofSetLineWidth(1);
               ofLine(ofGetWidth()/2, ofGetHeight()/2, mouseX, mouseY);
               
               


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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
