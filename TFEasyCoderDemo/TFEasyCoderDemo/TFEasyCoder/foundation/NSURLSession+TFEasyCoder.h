//
//  NSURLSession+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURLSession,NSURLSession *);

@interface NSURLSession (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURLSession, NSURLSession *);
TF_EC_MINSTANCE_INT(NSURLSession,NSURLSession *);



TF_EC_CHAIN_PROP_INT(NSURLSession ,NSString *,sessionDescription);





//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSURLSession ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSURLSession ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSURLSession ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSURLSession ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSURLSession ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSURLSession ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSURLSession ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSURLSession ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSURLSession ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSURLSession ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSURLSession ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSURLSession ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSURLSession ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSURLSession ,long long,accessibilityNavigationStyle)





@end