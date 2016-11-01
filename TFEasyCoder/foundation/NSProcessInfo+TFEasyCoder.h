//
//  NSProcessInfo+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSProcessInfo,NSProcessInfo *);

@interface NSProcessInfo (TFEasyCoder)

TF_EC_MSTATIC_INT(NSProcessInfo, NSProcessInfo *);
TF_EC_MINSTANCE_INT(NSProcessInfo,NSProcessInfo *);


TF_EC_CHAIN_PROP_INT(NSProcessInfo ,NSString *,processName);





//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSProcessInfo ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSProcessInfo ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSProcessInfo ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSProcessInfo ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSProcessInfo ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSProcessInfo ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSProcessInfo ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSProcessInfo ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSProcessInfo ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSProcessInfo ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSProcessInfo ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSProcessInfo ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSProcessInfo ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSProcessInfo ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSProcessInfo);


@end