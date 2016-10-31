//
//  NSMutableArray+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMutableArray,NSMutableArray *);

@interface NSMutableArray (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMutableArray, NSMutableArray *);
TF_EC_MINSTANCE_INT(NSMutableArray,NSMutableArray *);






//superclass pros NSArray
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSMutableArray ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSMutableArray ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSMutableArray ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSMutableArray ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSMutableArray ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSMutableArray ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSMutableArray ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSMutableArray ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSMutableArray ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSMutableArray ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSMutableArray ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSMutableArray ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSMutableArray ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSMutableArray ,long long,accessibilityNavigationStyle)





@end