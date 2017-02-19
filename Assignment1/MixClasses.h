//
//  MixClasses.h
//  Assignment1
//
//  Created by John Janzen on 2017-02-19.
//  Copyright © 2017 John Janzen. All rights reserved.
//

#ifndef MixClasses_h
#define MixClasses_h

struct CPlusPlusClass;

@interface MixClasses : NSObject {
    struct CPlusPlusClass *cPlusPlus;
}

@property (nonatomic) int val;
@property (nonatomic) BOOL objC;

- (void) incrementValue;
- (int) returnValue;
- (NSString*) getString;

@end


#endif /* MixClasses_h */
