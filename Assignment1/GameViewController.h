//
//  GameViewController.h
//  Assignment1
//
//  Created by John Janzen on 2017-02-12.
//  Copyright © 2017 John Janzen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@interface GameViewController : GLKViewController
@property (weak, nonatomic) IBOutlet UILabel *infoLabel1;
@property (weak, nonatomic) IBOutlet UILabel *InfoLabel2;
@property (weak, nonatomic) IBOutlet UIButton *buttonPress;
@property (weak, nonatomic) IBOutlet UILabel *classLabel;
@property (weak, nonatomic) IBOutlet UIButton *switchButton;

@end
