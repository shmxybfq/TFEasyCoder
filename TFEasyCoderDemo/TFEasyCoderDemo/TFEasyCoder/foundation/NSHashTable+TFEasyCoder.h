//
//  NSHashTable+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSHashTable,NSHashTable *);

@interface NSHashTable (TFEasyCoder)

TF_EC_MSTATIC_INT(NSHashTable, NSHashTable *);
TF_EC_MINSTANCE_INT(NSHashTable,NSHashTable *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSHashTable ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSHashTable ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSHashTable ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSHashTable ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSHashTable ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSHashTable ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSHashTable ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSHashTable ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSHashTable ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSHashTable ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSHashTable ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSHashTable ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSHashTable ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSHashTable ,long long,accessibilityNavigationStyle)





@end