//
//  GameBoard.m
//  mingame
//
//  Created by Jason Baker on 8/28/17.
//  Copyright © 2017 Jason Baker. All rights reserved.
//

#import "GameBoard.h"

@implementation GameBoard

- (instancetype)initWithColumnCount:(int)columnCount rowCount:(int)rowCount {
    self = [super init];
    if (self) {
        self.columnCount = columnCount;
        self.rowCount = rowCount;
        [self clearBoard];
    }
    return self;
}

- (void) clearBoard {
    self.board = [NSMutableArray arrayWithCapacity:self.columnCount];
    for (int i = 0; i < self.columnCount; i++) {
        NSMutableArray * col = [NSMutableArray arrayWithCapacity:self.rowCount];
        [self.board addObject:col];
        for (int j = 0; j < self.rowCount; j++) {
            [col addObject:[NSNull null]];
        }
    }
}

- (void) placeObjectInBoard:(GameObject *)obj {
    NSMutableArray * col = [self getColForIndex:obj.position.x];
    [col replaceObjectAtIndex:obj.position.y withObject:obj];
}

- (void) removeObjectFromBoard:(GameObject *)obj {
    NSMutableArray * col = [self getColForIndex:obj.position.x];
    [col replaceObjectAtIndex:obj.position.y withObject:[NSNull null]];
}

- (NSObject *) getObjectAtX:(int)x y:(int)y {
    NSMutableArray * col = [self getColForIndex:x];
    return [col objectAtIndex:y];
}

- (NSMutableArray *) getColForIndex:(int)index { return [self.board objectAtIndex:index]; }

@end
