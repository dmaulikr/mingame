//
//  GameBoard.h
//  mingame
//
//  Created by Jason Baker on 8/28/17.
//  Copyright © 2017 Jason Baker. All rights reserved.
//

#import "GameLevel.h"

@interface GameBoard : NSObject

@property int columnCount;
@property int rowCount;
@property (strong) NSMutableArray * board;

+ (GameBoard*) createBoardForLevel:(GameLevel *)level;

- (instancetype)initWithColumnCount:(int)columnCount rowCount:(int)rowCount;
- (void) placeObjectInBoard:(GameObject *)obj;
- (void) removeObjectFromBoard:(GameObject *)obj;
- (NSObject *) getObjectAtX:(int)x y:(int)y;
- (NSMutableArray *) getColForIndex:(int)index;
- (void) clearBoard;

@end
