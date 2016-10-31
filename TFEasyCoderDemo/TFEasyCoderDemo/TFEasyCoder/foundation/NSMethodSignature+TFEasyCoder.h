//
//  NSMethodSignature+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMethodSignature,NSMethodSignature *);

@interface NSMethodSignature (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMethodSignature, NSMethodSignature *);
TF_EC_MINSTANCE_INT(NSMethodSignature,NSMethodSignature *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSMethodSignature ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSMethodSignature ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSMethodSignature ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSMethodSignature ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSMethodSignature ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSMethodSignature ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSMethodSignature ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSMethodSignature ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSMethodSignature ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSMethodSignature ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSMethodSignature ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSMethodSignature ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSMethodSignature ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSMethodSignature ,long long,accessibilityNavigationStyle)





@end