//
//  UIStoryboardUnwindSegueSource+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIStoryboardUnwindSegueSource,UIStoryboardUnwindSegueSource *);

@interface UIStoryboardUnwindSegueSource (TFEasyCoder)

TF_EC_MSTATIC_INT(UIStoryboardUnwindSegueSource, UIStoryboardUnwindSegueSource *);
TF_EC_MINSTANCE_INT(UIStoryboardUnwindSegueSource,UIStoryboardUnwindSegueSource *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIStoryboardUnwindSegueSource ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIStoryboardUnwindSegueSource ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIStoryboardUnwindSegueSource ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIStoryboardUnwindSegueSource ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIStoryboardUnwindSegueSource ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIStoryboardUnwindSegueSource ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIStoryboardUnwindSegueSource ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIStoryboardUnwindSegueSource ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIStoryboardUnwindSegueSource ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIStoryboardUnwindSegueSource ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIStoryboardUnwindSegueSource ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIStoryboardUnwindSegueSource ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIStoryboardUnwindSegueSource ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIStoryboardUnwindSegueSource ,long long,accessibilityNavigationStyle)





@end