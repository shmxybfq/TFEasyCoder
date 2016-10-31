//
//  CAKeyframeAnimation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAKeyframeAnimation,CAKeyframeAnimation *);

@interface CAKeyframeAnimation (TFEasyCoder)

TF_EC_MSTATIC_INT(CAKeyframeAnimation, CAKeyframeAnimation *);
TF_EC_MINSTANCE_INT(CAKeyframeAnimation,CAKeyframeAnimation *);


TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSArray *,values);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,CGPathRef,path);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSArray *,keyTimes);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSArray *,timingFunctions);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSString *,calculationMode);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSArray *,tensionValues);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSArray *,continuityValues);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSArray *,biasValues);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSString *,rotationMode);




//superclass pros CAPropertyAnimation
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSString *,keyPath);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,BOOL,additive);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,BOOL,cumulative);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,CAValueFunction *,valueFunction);
//superclass pros CAAnimation
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,CAMediaTimingFunction *,timingFunction);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,double,beginTime);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,double,duration);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,float,speed);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,double,timeOffset);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,float,repeatCount);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,double,repeatDuration);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,BOOL,autoreverses);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSString *,fillMode);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,long long,accessibilityNavigationStyle)





@end