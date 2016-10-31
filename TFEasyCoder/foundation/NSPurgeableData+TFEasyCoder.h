//
//  NSPurgeableData+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSPurgeableData,NSPurgeableData *);

@interface NSPurgeableData (TFEasyCoder)

TF_EC_MSTATIC_INT(NSPurgeableData, NSPurgeableData *);
TF_EC_MINSTANCE_INT(NSPurgeableData,NSPurgeableData *);






//superclass pros NSMutableData
TF_EC_CHAIN_PROP_INT(NSPurgeableData ,unsigned long long,length);
//superclass pros NSData
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSPurgeableData ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSPurgeableData ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSPurgeableData ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSPurgeableData ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSPurgeableData ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSPurgeableData ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSPurgeableData ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSPurgeableData ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSPurgeableData ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSPurgeableData ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSPurgeableData ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSPurgeableData ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSPurgeableData ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSPurgeableData ,long long,accessibilityNavigationStyle)





@end