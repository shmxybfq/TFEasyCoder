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




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSUndoManager ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSUndoManager ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSUndoManager ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSUndoManager ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSUndoManager ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSUndoManager ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSUndoManager ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSUndoManager ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSUndoManager ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSUndoManager ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSUndoManager ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSUndoManager ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSUndoManager ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSUndoManager ,long long,accessibilityNavigationStyle)





@end