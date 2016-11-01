//
//  NSAssertionHandler+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSAssertionHandler,NSAssertionHandler *);

@interface NSAssertionHandler (TFEasyCoder)

TF_EC_MSTATIC_INT(NSAssertionHandler, NSAssertionHandler *);
TF_EC_MINSTANCE_INT(NSAssertionHandler,NSAssertionHandler *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSAssertionHandler ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSAssertionHandler ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSAssertionHandler ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSAssertionHandler ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSAssertionHandler ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSAssertionHandler ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSAssertionHandler ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSAssertionHandler ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSAssertionHandler ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSAssertionHandler ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSAssertionHandler ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSAssertionHandler ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSAssertionHandler ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSAssertionHandler ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSAssertionHandler);


@end