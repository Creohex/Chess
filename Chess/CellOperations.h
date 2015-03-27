//
//  CellOperations.h
//  Chess
//
//  Created by Admin on 20/11/14.
//  Copyright (c) 2014 Pew-pew industries inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Figure.h"

#ifndef Chess_CellOperations_h
#define Chess_CellOperations_h

@interface CellOperations: NSObject

@property (nonatomic) NSMutableArray *array;

+(instancetype)myInit:(NSMutableArray*)cellArray;

@end

#endif
