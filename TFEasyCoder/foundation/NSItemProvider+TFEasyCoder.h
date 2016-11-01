//
//  NSItemProvider+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSItemProvider,NSItemProvider *);

@interface NSItemProvider (TFEasyCoder)

TF_EC_MSTATIC_INT(NSItemProvider, NSItemProvider *);
TF_EC_MINSTANCE_INT(NSItemProvider,NSItemProvider *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSItemProvider ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSItemProvider ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSItemProvider ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSItemProvider ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSItemProvider ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSItemProvider ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSItemProvider ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSItemProvider ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSItemProvider ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSItemProvider ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSItemProvider ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSItemProvider ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSItemProvider ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSItemProvider ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSItemProvider);


@end