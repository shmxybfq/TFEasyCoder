//
//  NSFileVersion+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSFileVersion,NSFileVersion *);

@interface NSFileVersion (TFEasyCoder)

TF_EC_MSTATIC_INT(NSFileVersion, NSFileVersion *);
TF_EC_MINSTANCE_INT(NSFileVersion,NSFileVersion *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSFileVersion ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSFileVersion ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSFileVersion ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSFileVersion ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSFileVersion ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSFileVersion ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSFileVersion ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSFileVersion ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSFileVersion ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSFileVersion ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSFileVersion ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSFileVersion ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSFileVersion ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSFileVersion ,long long,accessibilityNavigationStyle)





@end