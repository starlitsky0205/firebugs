#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    for(int i = 0; i < 1; i++){
        Drop d = Drop();
        dropArray.push_back(d);
        ofColor(255);
        ofNoFill();
        ofDrawBox(0,0,0,a);
    
    }
}


//--------------------------------------------------------------
void ofApp::update(){

    
    for(int i = 0; i <dropArray.size() ; i++){
        dropArray[i].update();
        
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackgroundGradient(ofColor(246-b,114-b,128+b),ofColor(21,22,128),OF_GRADIENT_LINEAR);
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
     b=b+0.5;
    if(128+b>255){
        b=-b;
    }
    
    ofColor(255);
    ofNoFill();
    ofDrawBox(0,0,0,a);
    
    
    for(int i = 0; i < dropArray.size(); i++){
        ofSetColor(243,249,119);
        dropArray[i].draw();
    }

    for(int i=0;i<1;i++){
        ofSetColor(243,249,119);
        ofPoint pos=dropArray[i].getPos();
            if(pos.x>a/2-5||pos.x<-a/2+5 ||pos.y>a/2-5 ||pos.y<-a/2+5 || pos.z>a/2-5||pos.z<-a/2+5){
                b++;
                dropArray[i].setradius(0);
                Drop d1 = Drop();
                //d1.setpos(pos);
               // d1.setspeed(ofPoint(ofRandom(-2, 2), ofRandom(-2, 2),ofRandom(-2, 2)));
                dropArray.push_back(d1);
            }
    }

}



//--------------------------------------------------------------
       void ofApp::keyPressed(int key){
//           if (key == 'f') ofToggleFullscreen();
 
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
