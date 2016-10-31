//
//  NSFileHandle+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSFileHandle,NSFileHandle *);

@interface NSFileHandle (TFEasyCoder)

TF_EC_MSTATIC_INT(NSFileHandle, NSFileHandle *);
TF_EC_MINSTANCE_INT(NSFileHandle,NSFileHandle *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSFileHandle ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSFileHandle ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSFileHandle ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSFileHandle ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSFileHandle ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSFileHandle ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSFileHandle ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSFileHandle ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSFileHandle ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSFileHandle ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSFileHandle ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSFileHandle ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSFileHandle ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSFileHandle ,long long,accessibilityNavigationStyle)





@end