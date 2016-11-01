//
//  NSTextTab+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSTextTab,NSTextTab *);

@interface NSTextTab (TFEasyCoder)

TF_EC_MSTATIC_INT(NSTextTab, NSTextTab *);
TF_EC_MINSTANCE_INT(NSTextTab,NSTextTab *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSTextTab ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSTextTab ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSTextTab ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSTextTab ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSTextTab ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSTextTab ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSTextTab ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSTextTab ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSTextTab ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSTextTab ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSTextTab ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSTextTab ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSTextTab ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSTextTab ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSTextTab);


@end