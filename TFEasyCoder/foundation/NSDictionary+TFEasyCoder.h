//
//  NSDictionary+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSDictionary,NSDictionary *);

@interface NSDictionary (TFEasyCoder)

TF_EC_MSTATIC_INT(NSDictionary, NSDictionary *);
TF_EC_MINSTANCE_INT(NSDictionary,NSDictionary *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSDictionary ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSDictionary ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSDictionary ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSDictionary ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSDictionary ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSDictionary ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSDictionary ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSDictionary ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSDictionary ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSDictionary ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSDictionary ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSDictionary ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSDictionary ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSDictionary ,long long,accessibilityNavigationStyle)





@end