//
//  NSUndoManager+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSUndoManager+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSUndoManager (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSUndoManager, NSUndoManager *);
TF_EC_MINSTANCE_IMP(NSUndoManager, NSUndoManager *);


TF_EC_CHAIN_PROP_IMP(NSUndoManager ,BOOL,groupsByEvent)
TF_EC_CHAIN_PROP_IMP(NSUndoManager ,unsigned long long,levelsOfUndo)
TF_EC_CHAIN_PROP_IMP(NSUndoManager ,NSArray *,runLoopModes)

@end