//
//  NSIndexPath+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSIndexPath,NSIndexPath *);

@interface NSIndexPath (TFEasyCoder)

TF_EC_MSTATIC_INT(NSIndexPath, NSIndexPath *);
TF_EC_MINSTANCE_INT(NSIndexPath,NSIndexPath *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSIndexPath ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSIndexPath ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSIndexPath ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSIndexPath ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSIndexPath ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSIndexPath ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSIndexPath ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSIndexPath ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSIndexPath ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSIndexPath ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSIndexPath ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSIndexPath ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSIndexPath ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSIndexPath ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSIndexPath);


@end