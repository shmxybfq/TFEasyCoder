//
//  UIDocument+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIDocument+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIDocument (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIDocument, UIDocument *);
TF_EC_MINSTANCE_IMP(UIDocument, UIDocument *);


TF_EC_CHAIN_PROP_IMP(UIDocument ,NSDate *,fileModificationDate)
TF_EC_CHAIN_PROP_IMP(UIDocument ,NSUndoManager *,undoManager)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIDocument ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIDocument ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIDocument ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIDocument ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIDocument ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIDocument ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIDocument ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIDocument ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIDocument ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIDocument ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIDocument ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIDocument ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIDocument ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIDocument ,long long,accessibilityNavigationStyle)





@end