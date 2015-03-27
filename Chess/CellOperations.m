//
//  CellOperations.m
//  Chess
//
//  Created by Admin on 20/11/14.
//  Copyright (c) 2014 Pew-pew industries inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CellOperations.h"

#ifndef Chess_CellOperations_m
#define Chess_CellOperations_m

@implementation CellOperations

@synthesize array;

+(instancetype)myInit:(NSMutableArray *)cellArray
{
    CellOperations *tempInstance = [[CellOperations alloc] init];
    //[tempInstance setArray:cellArray];
    return tempInstance;
}

@end

#endif
