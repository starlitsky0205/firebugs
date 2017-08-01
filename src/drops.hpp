

#ifndef drops_hpp
#define drops_hpp

#include <stdio.h>
#include "ofMain.h"

class Drop{
public:

    float size;
    ofVec3f pos,speed;
    float mouse_x;
    float mouse_y;
    int a=300;
    float radius=1;
  
    Drop();
    
    
    void update();
    void draw();
    void medamapos();
    void setpos(ofVec3f pos);
    ofPoint getPos();
    void setspeed(ofVec3f speed);
    ofPoint getSpeed();
    void setradius(float radius);
    void getradius();
    
};

#endif /* drops_hpp */



