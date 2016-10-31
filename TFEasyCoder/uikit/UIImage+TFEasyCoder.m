//
//  UIImage+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIImage+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIImage (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIImage, UIImage *);
TF_EC_MINSTANCE_IMP(UIImage, UIImage *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIImage ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIImage ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIImage ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIImage ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIImage ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIImage ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIImage ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIImage ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIImage ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIImage ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIImage ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIImage ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIImage ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIImage ,long long,accessibilityNavigationStyle)





@end