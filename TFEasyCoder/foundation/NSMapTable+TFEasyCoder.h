//
//  NSMapTable+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMapTable,NSMapTable *);

@interface NSMapTable (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMapTable, NSMapTable *);
TF_EC_MINSTANCE_INT(NSMapTable,NSMapTable *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSMapTable ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSMapTable ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSMapTable ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSMapTable ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSMapTable ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSMapTable ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSMapTable ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSMapTable ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSMapTable ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSMapTable ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSMapTable ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSMapTable ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSMapTable ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSMapTable ,long long,accessibilityNavigationStyle)





@end