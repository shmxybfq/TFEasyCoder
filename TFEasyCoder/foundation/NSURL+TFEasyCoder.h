//
//  NSURL+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURL,NSURL *);

@interface NSURL (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURL, NSURL *);
TF_EC_MINSTANCE_INT(NSURL,NSURL *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSURL ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSURL ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSURL ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSURL ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSURL ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSURL ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSURL ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSURL ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSURL ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSURL ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSURL ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSURL ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSURL ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSURL ,long long,accessibilityNavigationStyle)





@end