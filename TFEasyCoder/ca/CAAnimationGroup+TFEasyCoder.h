//
//  CAAnimationGroup+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAAnimationGroup,CAAnimationGroup *);

@interface CAAnimationGroup (TFEasyCoder)

TF_EC_MSTATIC_INT(CAAnimationGroup, CAAnimationGroup *);
TF_EC_MINSTANCE_INT(CAAnimationGroup,CAAnimationGroup *);


TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,NSArray *,animations);




//superclass pros CAAnimation
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,CAMediaTimingFunction *,timingFunction);
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,double,beginTime);
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,double,duration);
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,float,speed);
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,double,timeOffset);
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,float,repeatCount);
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,double,repeatDuration);
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,BOOL,autoreverses);
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,NSString *,fillMode);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(CAAnimationGroup);


@end