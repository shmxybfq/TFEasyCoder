//
//  NSURLCache+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURLCache,NSURLCache *);

@interface NSURLCache (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURLCache, NSURLCache *);
TF_EC_MINSTANCE_INT(NSURLCache,NSURLCache *);


TF_EC_CHAIN_PROP_INT(NSURLCache ,unsigned long long,memoryCapacity);
TF_EC_CHAIN_PROP_INT(NSURLCache ,unsigned long long,diskCapacity);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSURLCache ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSURLCache ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSURLCache ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSURLCache ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSURLCache ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSURLCache ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSURLCache ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSURLCache ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSURLCache ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSURLCache ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSURLCache ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSURLCache ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSURLCache ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSURLCache ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSURLCache);


@end