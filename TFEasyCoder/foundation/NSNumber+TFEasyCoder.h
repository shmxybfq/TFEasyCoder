//
//  NSNumber+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSNumber,NSNumber *);

@interface NSNumber (TFEasyCoder)

TF_EC_MSTATIC_INT(NSNumber, NSNumber *);
TF_EC_MINSTANCE_INT(NSNumber,NSNumber *);






//superclass pros NSValue
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSNumber ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSNumber ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSNumber ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSNumber ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSNumber ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSNumber ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSNumber ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSNumber ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSNumber ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSNumber ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSNumber ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSNumber ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSNumber ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSNumber ,long long,accessibilityNavigationStyle)





@end