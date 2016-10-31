//
//  NSURLQueryItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURLQueryItem,NSURLQueryItem *);

@interface NSURLQueryItem (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURLQueryItem, NSURLQueryItem *);
TF_EC_MINSTANCE_INT(NSURLQueryItem,NSURLQueryItem *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSURLQueryItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSURLQueryItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSURLQueryItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSURLQueryItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSURLQueryItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSURLQueryItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSURLQueryItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSURLQueryItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSURLQueryItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSURLQueryItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSURLQueryItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSURLQueryItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSURLQueryItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSURLQueryItem ,long long,accessibilityNavigationStyle)





@end