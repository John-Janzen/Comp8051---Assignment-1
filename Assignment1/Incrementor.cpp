//
//  Incrementor.cpp
//  Assignment1
//
//  Created by John Janzen on 2017-02-19.
//  Copyright © 2017 John Janzen. All rights reserved.
//

#ifdef __cplusplus
#include "Incrementor.h"

Incrementor::Incrementor() {
    number = 0;
}

int Incrementor::getNumber() {
    return number;
}

void Incrementor::incrementNumber() {
    number++;
}
#endif
