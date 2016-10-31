//
//  NSURLProtocol+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURLProtocol,NSURLProtocol *);

@interface NSURLProtocol (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURLProtocol, NSURLProtocol *);
TF_EC_MINSTANCE_INT(NSURLProtocol,NSURLProtocol *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSURLProtocol ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSURLProtocol ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSURLProtocol ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSURLProtocol ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSURLProtocol ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSURLProtocol ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSURLProtocol ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSURLProtocol ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSURLProtocol ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSURLProtocol ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSURLProtocol ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSURLProtocol ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSURLProtocol ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSURLProtocol ,long long,accessibilityNavigationStyle)





@end