//
//  Drawable.m
//  Assignment1
//
//  Created by John Janzen on 2017-02-18.
//  Copyright © 2017 John Janzen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Drawable.h"

@interface Drawable () {
    
    GLKMatrix4 modelMatrix;
    GLKMatrix4 _normalMatrix;
    GLKVector3 _positionVector;
    GLKVector3 _rotateVector;
}


@end

@implementation Drawable

- (id) init : (GLKVector3) pos : (GLKVector3) rot {
    self = [super init];
    if (self) {
        _positionVector = pos;
        _rotateVector = rot;
    }
    return self;
}

- (GLKMatrix4) getModelMatrix {
    return modelMatrix;
}

- (void) translateMatrix:(GLKVector3)moveVector{
    _positionVector = GLKVector3Add(_positionVector, moveVector);
}

- (void) makeTranslationSetUp {
    modelMatrix = GLKMatrix4MakeTranslation(_positionVector.x, _positionVector.y, _positionVector.z);
}

- (void) setModelMatrix:(GLKMatrix4)matrix {
    modelMatrix = matrix;
}

- (void) rotateMatrix:(GLKVector3)rotateMat : (float) degree {
    modelMatrix = GLKMatrix4RotateWithVector3(modelMatrix, degree, rotateMat);
}

- (GLKVector3) getPosition {
    return _positionVector;
}

- (GLKVector3) getRotation {
    return _rotateVector;
}

- (void) rotateMatrixSetup {
    GLKMatrix4 newMatrix = GLKMatrix4Identity;
    newMatrix = GLKMatrix4RotateX(newMatrix, _rotateVector.x);
    newMatrix = GLKMatrix4RotateY(newMatrix, _rotateVector.y);
    modelMatrix = GLKMatrix4Multiply(modelMatrix, GLKMatrix4RotateZ(newMatrix, _rotateVector.z));
    
}

- (void) newRotate:(GLKVector3)rot {
    _rotateVector = GLKVector3Add(_rotateVector, rot);
}

- (void) resetPosRot {
    _positionVector = GLKVector3Make(0.0f, 0.0f, 0.0f);
    _rotateVector = GLKVector3Make(0.0f, 0.0f, 0.0f);
}

@end
