//
//  NSPropertyListSerialization+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSPropertyListSerialization,NSPropertyListSerialization *);

@interface NSPropertyListSerialization (TFEasyCoder)

TF_EC_MSTATIC_INT(NSPropertyListSerialization, NSPropertyListSerialization *);
TF_EC_MINSTANCE_INT(NSPropertyListSerialization,NSPropertyListSerialization *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSPropertyListSerialization ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSPropertyListSerialization ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSPropertyListSerialization ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSPropertyListSerialization ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSPropertyListSerialization ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSPropertyListSerialization ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSPropertyListSerialization ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSPropertyListSerialization ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSPropertyListSerialization ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSPropertyListSerialization ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSPropertyListSerialization ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSPropertyListSerialization ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSPropertyListSerialization ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSPropertyListSerialization ,long long,accessibilityNavigationStyle)





@end