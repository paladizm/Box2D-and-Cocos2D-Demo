//
//  HelloWorldLayer.h
//  Box2d
//
//  Created by Zac Paladino on 8/17/12.
//  Copyright __MyCompanyName__ 2012. All rights reserved.
//


#import "cocos2d.h"
#import "Box2D.h"

#define PTM_RATIO 32.0

@interface HelloWorldLayer : CCLayer {
    b2World *_world;
    b2Body *_body;
    CCSprite *_ball;
}

+ (id) scene;

@end
