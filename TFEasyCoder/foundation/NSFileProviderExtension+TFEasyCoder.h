//
//  NSFileProviderExtension+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSFileProviderExtension,NSFileProviderExtension *);

@interface NSFileProviderExtension (TFEasyCoder)

TF_EC_MSTATIC_INT(NSFileProviderExtension, NSFileProviderExtension *);
TF_EC_MINSTANCE_INT(NSFileProviderExtension,NSFileProviderExtension *);





//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSFileProviderExtension ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSFileProviderExtension ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSFileProviderExtension ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSFileProviderExtension ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSFileProviderExtension ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSFileProviderExtension ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSFileProviderExtension ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSFileProviderExtension ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSFileProviderExtension ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSFileProviderExtension ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSFileProviderExtension ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSFileProviderExtension ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSFileProviderExtension ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSFileProviderExtension ,long long,accessibilityNavigationStyle)





@end