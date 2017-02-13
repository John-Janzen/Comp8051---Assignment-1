//
//  Shader.fsh
//  Assignment1
//
//  Created by John Janzen on 2017-02-12.
//  Copyright © 2017 John Janzen. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
    gl_FragColor = colorVarying;
}
