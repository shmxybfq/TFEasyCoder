//
//  UIRegion+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIRegion,UIRegion *);

@interface UIRegion (TFEasyCoder)

TF_EC_MSTATIC_INT(UIRegion, UIRegion *);
TF_EC_MINSTANCE_INT(UIRegion,UIRegion *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIRegion ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIRegion ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIRegion ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIRegion ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIRegion ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIRegion ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIRegion ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIRegion ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIRegion ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIRegion ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIRegion ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIRegion ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIRegion ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIRegion ,long long,accessibilityNavigationStyle)





@end