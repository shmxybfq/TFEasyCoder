//
//  NSURLCredential+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURLCredential,NSURLCredential *);

@interface NSURLCredential (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURLCredential, NSURLCredential *);
TF_EC_MINSTANCE_INT(NSURLCredential,NSURLCredential *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSURLCredential ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSURLCredential ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSURLCredential ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSURLCredential ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSURLCredential ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSURLCredential ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSURLCredential ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSURLCredential ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSURLCredential ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSURLCredential ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSURLCredential ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSURLCredential ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSURLCredential ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSURLCredential ,long long,accessibilityNavigationStyle)





@end