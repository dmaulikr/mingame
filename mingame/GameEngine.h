//
//  GameEngine.h
//  mingame
//
//  Created by Jason Baker on 8/29/17.
//  Copyright © 2017 Jason Baker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface GameEngine : NSObject

- (instancetype)initWithImageView:(UIImageView *)imageView;
- (void) movePlayerByOffsetx:(int)x yOffset:(int)y;

@end
