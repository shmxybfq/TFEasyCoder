//
//  UITableViewFocusUpdateContext+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITableViewFocusUpdateContext+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITableViewFocusUpdateContext (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITableViewFocusUpdateContext, UITableViewFocusUpdateContext *);
TF_EC_MINSTANCE_IMP(UITableViewFocusUpdateContext, UITableViewFocusUpdateContext *);






//superclass pros UIFocusUpdateContext
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UITableViewFocusUpdateContext ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UITableViewFocusUpdateContext ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UITableViewFocusUpdateContext ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UITableViewFocusUpdateContext ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UITableViewFocusUpdateContext ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UITableViewFocusUpdateContext ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UITableViewFocusUpdateContext ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UITableViewFocusUpdateContext ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UITableViewFocusUpdateContext ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UITableViewFocusUpdateContext ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UITableViewFocusUpdateContext ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UITableViewFocusUpdateContext ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UITableViewFocusUpdateContext ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UITableViewFocusUpdateContext ,long long,accessibilityNavigationStyle)





@end