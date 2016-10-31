//
//  NSRunLoop+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSRunLoop,NSRunLoop *);

@interface NSRunLoop (TFEasyCoder)

TF_EC_MSTATIC_INT(NSRunLoop, NSRunLoop *);
TF_EC_MINSTANCE_INT(NSRunLoop,NSRunLoop *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSRunLoop ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSRunLoop ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSRunLoop ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSRunLoop ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSRunLoop ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSRunLoop ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSRunLoop ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSRunLoop ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSRunLoop ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSRunLoop ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSRunLoop ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSRunLoop ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSRunLoop ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSRunLoop ,long long,accessibilityNavigationStyle)





@end