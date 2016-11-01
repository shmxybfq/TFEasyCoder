//
//  NSComparisonPredicate+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSComparisonPredicate,NSComparisonPredicate *);

@interface NSComparisonPredicate (TFEasyCoder)

TF_EC_MSTATIC_INT(NSComparisonPredicate, NSComparisonPredicate *);
TF_EC_MINSTANCE_INT(NSComparisonPredicate,NSComparisonPredicate *);






//superclass pros NSPredicate
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSComparisonPredicate ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSComparisonPredicate ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSComparisonPredicate ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSComparisonPredicate ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSComparisonPredicate ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSComparisonPredicate ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSComparisonPredicate ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSComparisonPredicate ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSComparisonPredicate ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSComparisonPredicate ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSComparisonPredicate ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSComparisonPredicate ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSComparisonPredicate ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSComparisonPredicate ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSComparisonPredicate);


@end