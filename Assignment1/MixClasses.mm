//
//  MixClasses.m
//  Assignment1
//
//  Created by John Janzen on 2017-02-19.
//  Copyright © 2017 John Janzen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MixClasses.h"
#include "Incrementor.h"

struct CPlusPlusClass {
    Incrementor incre;
};

@implementation MixClasses

@synthesize val;
@synthesize objC;

- (id)init
{
    self = [super init];
    if (self) {
        objC = YES;
        val = 0;
        cPlusPlus = new CPlusPlusClass;
    }
    return self;
}

- (void) incrementValue {
    if (objC) {
        val++;
    } else {
        cPlusPlus->incre.incrementNumber();
    }
    objC = !objC;
}

- (int) returnValue {
    return objC ? val : cPlusPlus->incre.getNumber();
}

- (NSString*) getString {
    return objC ? @"Objective-C" : @"C++";
}

@end
