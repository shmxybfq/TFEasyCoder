//
//  UIBezierPath+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIBezierPath,UIBezierPath *);

@interface UIBezierPath (TFEasyCoder)

TF_EC_MSTATIC_INT(UIBezierPath, UIBezierPath *);
TF_EC_MINSTANCE_INT(UIBezierPath,UIBezierPath *);

TF_EC_CHAIN_PROP_INT(UIBezierPath ,CGPathRef,CGPath);
TF_EC_CHAIN_PROP_INT(UIBezierPath ,double,lineWidth);
TF_EC_CHAIN_PROP_INT(UIBezierPath ,int,lineCapStyle);
TF_EC_CHAIN_PROP_INT(UIBezierPath ,int,lineJoinStyle);
TF_EC_CHAIN_PROP_INT(UIBezierPath ,double,miterLimit);
TF_EC_CHAIN_PROP_INT(UIBezierPath ,double,flatness);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIBezierPath ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIBezierPath ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIBezierPath ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIBezierPath ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIBezierPath ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIBezierPath ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIBezierPath ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIBezierPath ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIBezierPath ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIBezierPath ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIBezierPath ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIBezierPath ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIBezierPath ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIBezierPath ,long long,accessibilityNavigationStyle)





@end