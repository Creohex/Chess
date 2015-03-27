//
//  ChessClass.m
//  Chess
//
//  Created by Admin on 15/11/14.
//  Copyright (c) 2014 Pew-pew industries inc. All rights reserved.
//

#import "ChessClass.h"

#ifndef Chess_ChessClass_m
#define Chess_ChessClass_m

@implementation ChessClass

+(instancetype)myInit
{
    ChessClass *temp = [[ChessClass alloc] init];
    return temp;
}

-(void)testFunc
{
    NSLog(@"test func of class \"chess\"");
}

@end

#endif
