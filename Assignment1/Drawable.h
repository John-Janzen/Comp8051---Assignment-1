//
//  Drawable.h
//  Assignment1
//
//  Created by John Janzen on 2017-02-18.
//  Copyright © 2017 John Janzen. All rights reserved.
//

#ifndef Drawable_h
#define Drawable_h

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@interface Drawable : NSObject

- (id) init:(GLKVector3) pos : (GLKVector3) rot; // Initializes Vector's position and rotations
- (GLKMatrix4)getModelMatrix; // returns model matrix for item
- (void) translateMatrix:(GLKVector3) translate; // translates the model
- (void) makeTranslationSetUp; // sets up the translation matrix at the beginning
- (void) setModelMatrix:(GLKMatrix4) matrix; // set the model matrix whenever needed
- (void) rotateMatrix:(GLKVector3)rotateMat : (float)degree; // rotates model by radians on axis
- (GLKVector3) getPosition; // returns position vector
- (GLKVector3) getRotation; // returns rotation vector
- (void) rotateMatrixSetup; // sets up rotation vector
- (void) newRotate:(GLKVector3)rot; // creates new rotation matrix
- (void) resetPosRot; // resets position + rotation to 0,0,0

@end


#endif /* Drawable_h */
