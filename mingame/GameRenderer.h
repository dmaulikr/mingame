//
//  GameRenderer.h
//  mingame
//
//  Created by Jason Baker on 8/29/17.
//  Copyright © 2017 Jason Baker. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GameRenderer : NSObject

+ (UIImage *) createSpriteWithColor:(UIColor *)color height:(int)height width:(int)width;
+ (UIImage *) createSpriteWithColor:(UIColor *)color borderColor:(UIColor*)borderColor
                        borderWidth:(int)borderWidth height:(int)height width:(int)width;

+ (UIImage *) renderGrid:(UIColor *)color
             borderColor:(UIColor*)borderColor borderWidth:(int)borderWidth
              tileHeight:(int)tileHeight tileWidth:(int)tileWidth
             columnCount:(int)columnCount rowCount:(int)rowCount;

+ (UIImage *) renderGameObjects:(NSArray*)objects backgroundImage:(UIImage *)backgroundImage
                     tileLength:(int)tileLength borderWidth:(int)borderWidth
                    columnCount:(int)columnCount rowCount:(int)rowCount;
@end
