//
//  NSUndoManager+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSUndoManager,NSUndoManager *);

@interface NSUndoManager (TFEasyCoder)

TF_EC_MSTATIC_INT(NSUndoManager, NSUndoManager *);
TF_EC_MINSTANCE_INT(NSUndoManager,NSUndoManager *);


TF_EC_CHAIN_PROP_INT(NSUndoManager ,BOOL,groupsByEvent);
TF_EC_CHAIN_PROP_INT(NSUndoManager ,unsigned long long,levelsOfUndo);
TF_EC_CHAIN_PROP_INT(NSUndoManager ,NSArray *,runLoopModes);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSUndoManager ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSUndoManager ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSUndoManager ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSUndoManager ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSUndoManager ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSUndoManager ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSUndoManager ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSUndoManager ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSUndoManager ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSUndoManager ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSUndoManager ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSUndoManager ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSUndoManager ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSUndoManager ,long long,accessibilityNavigationStyle)





@end