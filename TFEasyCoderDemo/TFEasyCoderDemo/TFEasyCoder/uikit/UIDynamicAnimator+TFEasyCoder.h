//
//  UIDynamicAnimator+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIDynamicAnimator,UIDynamicAnimator *);

@interface UIDynamicAnimator (TFEasyCoder)

TF_EC_MSTATIC_INT(UIDynamicAnimator, UIDynamicAnimator *);
TF_EC_MINSTANCE_INT(UIDynamicAnimator,UIDynamicAnimator *);


TF_EC_CHAIN_PROP_INT(UIDynamicAnimator ,id<UIDynamicAnimatorDelegate> ,delegate);





//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIDynamicAnimator ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIDynamicAnimator ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIDynamicAnimator ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIDynamicAnimator ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIDynamicAnimator ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIDynamicAnimator ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIDynamicAnimator ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIDynamicAnimator ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIDynamicAnimator ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIDynamicAnimator ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIDynamicAnimator ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIDynamicAnimator ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIDynamicAnimator ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIDynamicAnimator ,long long,accessibilityNavigationStyle)





@end