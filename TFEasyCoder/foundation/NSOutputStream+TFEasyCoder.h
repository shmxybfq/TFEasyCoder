//
//  NSOutputStream+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSOutputStream,NSOutputStream *);

@interface NSOutputStream (TFEasyCoder)

TF_EC_MSTATIC_INT(NSOutputStream, NSOutputStream *);
TF_EC_MINSTANCE_INT(NSOutputStream,NSOutputStream *);






//superclass pros NSStream
TF_EC_CHAIN_PROP_INT(NSOutputStream ,id<NSStreamDelegate> ,delegate);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSOutputStream ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSOutputStream ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSOutputStream ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSOutputStream ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSOutputStream ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSOutputStream ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSOutputStream ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSOutputStream ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSOutputStream ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSOutputStream ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSOutputStream ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSOutputStream ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSOutputStream ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSOutputStream ,long long,accessibilityNavigationStyle)





@end