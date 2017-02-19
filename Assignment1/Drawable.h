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

- (id) initWithModel: (GLKVector3) pos : (GLKVector3) rot;
- (id) init:(GLKVector3) pos : (GLKVector3) rot;
- (GLKMatrix4)getModelMatrix;
- (void) translateMatrix:(GLKVector3) translate;
- (void) makeTranslationSetUp:(GLKVector3) origin;
- (void) setModelMatrix:(GLKMatrix4) matrix;
- (void) rotateMatrix:(GLKVector3)rotateMat : (float)degree;
- (GLKVector3) getPosition;
- (GLKVector3) getRotation;
- (GLKMatrix4) rotateMatrixSetup;
- (void) newRotate:(GLKVector3)rot;
- (void) resetPosRot;

@end


#endif /* Drawable_h */
