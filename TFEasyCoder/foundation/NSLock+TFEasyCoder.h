//
//  NSLock+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSLock,NSLock *);

@interface NSLock (TFEasyCoder)

TF_EC_MSTATIC_INT(NSLock, NSLock *);
TF_EC_MINSTANCE_INT(NSLock,NSLock *);


TF_EC_CHAIN_PROP_INT(NSLock ,NSString *,name);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSLock ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSLock ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSLock ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSLock ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSLock ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSLock ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSLock ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSLock ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSLock ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSLock ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSLock ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSLock ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSLock ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSLock ,long long,accessibilityNavigationStyle)





@end