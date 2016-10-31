//
//  NSCountedSet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSCountedSet,NSCountedSet *);

@interface NSCountedSet (TFEasyCoder)

TF_EC_MSTATIC_INT(NSCountedSet, NSCountedSet *);
TF_EC_MINSTANCE_INT(NSCountedSet,NSCountedSet *);






//superclass pros NSMutableSet
//superclass pros NSSet
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSCountedSet ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSCountedSet ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSCountedSet ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSCountedSet ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSCountedSet ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSCountedSet ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSCountedSet ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSCountedSet ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSCountedSet ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSCountedSet ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSCountedSet ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSCountedSet ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSCountedSet ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSCountedSet ,long long,accessibilityNavigationStyle)





@end