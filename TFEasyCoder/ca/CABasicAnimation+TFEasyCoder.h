//
//  CABasicAnimation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CABasicAnimation,CABasicAnimation *);

@interface CABasicAnimation (TFEasyCoder)

TF_EC_MSTATIC_INT(CABasicAnimation, CABasicAnimation *);
TF_EC_MINSTANCE_INT(CABasicAnimation,CABasicAnimation *);







//superclass pros CAPropertyAnimation
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,NSString *,keyPath);
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,BOOL,additive);
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,BOOL,cumulative);
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,CAValueFunction *,valueFunction);
//superclass pros CAAnimation
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,CAMediaTimingFunction *,timingFunction);
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,double,beginTime);
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,double,duration);
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,float,speed);
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,double,timeOffset);
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,float,repeatCount);
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,double,repeatDuration);
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,BOOL,autoreverses);
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,NSString *,fillMode);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CABasicAnimation ,long long,accessibilityNavigationStyle)





@end