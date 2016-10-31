//
//  UIBezierPath+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIBezierPath+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIBezierPath (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIBezierPath, UIBezierPath *);
TF_EC_MINSTANCE_IMP(UIBezierPath, UIBezierPath *);


TF_EC_CHAIN_PROP_IMP(UIBezierPath ,CGPathRef,CGPath)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,double,lineWidth)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,int,lineCapStyle)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,int,lineJoinStyle)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,double,miterLimit)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,double,flatness)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIBezierPath ,long long,accessibilityNavigationStyle)





@end