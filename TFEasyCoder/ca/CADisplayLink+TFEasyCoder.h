//
//  CADisplayLink+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CADisplayLink,CADisplayLink *);

@interface CADisplayLink (TFEasyCoder)

TF_EC_MSTATIC_INT(CADisplayLink, CADisplayLink *);
TF_EC_MINSTANCE_INT(CADisplayLink,CADisplayLink *);


TF_EC_CHAIN_PROP_INT(CADisplayLink ,BOOL,paused);
TF_EC_CHAIN_PROP_INT(CADisplayLink ,long long,frameInterval);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CADisplayLink ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CADisplayLink ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CADisplayLink ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CADisplayLink ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CADisplayLink ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CADisplayLink ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CADisplayLink ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CADisplayLink ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CADisplayLink ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CADisplayLink ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CADisplayLink ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CADisplayLink ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CADisplayLink ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CADisplayLink ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(CADisplayLink);


@end