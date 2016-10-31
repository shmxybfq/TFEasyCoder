//
//  UIStoryboard+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIStoryboard+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIStoryboard (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIStoryboard, UIStoryboard *);
TF_EC_MINSTANCE_IMP(UIStoryboard, UIStoryboard *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIStoryboard ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIStoryboard ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIStoryboard ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIStoryboard ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIStoryboard ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIStoryboard ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIStoryboard ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIStoryboard ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIStoryboard ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIStoryboard ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIStoryboard ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIStoryboard ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIStoryboard ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIStoryboard ,long long,accessibilityNavigationStyle)





@end