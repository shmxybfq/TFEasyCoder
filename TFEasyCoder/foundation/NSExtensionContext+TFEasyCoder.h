//
//  NSExtensionContext+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSExtensionContext,NSExtensionContext *);

@interface NSExtensionContext (TFEasyCoder)

TF_EC_MSTATIC_INT(NSExtensionContext, NSExtensionContext *);
TF_EC_MINSTANCE_INT(NSExtensionContext,NSExtensionContext *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSExtensionContext ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSExtensionContext ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSExtensionContext ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSExtensionContext ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSExtensionContext ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSExtensionContext ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSExtensionContext ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSExtensionContext ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSExtensionContext ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSExtensionContext ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSExtensionContext ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSExtensionContext ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSExtensionContext ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSExtensionContext ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSExtensionContext);


@end