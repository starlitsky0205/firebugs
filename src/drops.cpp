
#include "drops.hpp"


//constructor
Drop::Drop(){
    pos = ofVec3f(ofRandom(-a/2,a/2),ofRandom(-a/2,a/2),ofRandom(-a/2,a/2));
    speed = ofVec3f(ofRandom(-2, 2), ofRandom(-2, 2),ofRandom(-2, 2));//vector
    radius = 1;
    
}

void Drop::update(){
    

    pos = pos + speed;
    if(pos.x>a/2||pos.x<-a/2){
    speed.x=-speed.x;
    }
    if(pos.y>a/2||pos.y<-a/2){
        speed.y=-speed.y;
    }
    if(pos.z>a/2||pos.z<-a/2){
        speed.z=-speed.z;
    }
 
}
void Drop::draw(){
    ofDrawSphere(pos.x, pos.y,pos.z, radius*2);
}

void Drop::setpos(ofPoint _pos){
    pos=_pos;  //右は左と同じになるよ
}


ofPoint Drop::getPos(){
    return pos;
}

void Drop::setspeed(ofPoint _speed){
    speed=_speed;

}

ofPoint Drop::getSpeed(){         //ofPoint could be ofVec2f
    return speed;
}

void Drop::setradius(float _radius){
    radius=_radius;
    
}

void Drop::getradius(){         //ofPoint could be ofVec2f
    return radius;
}









