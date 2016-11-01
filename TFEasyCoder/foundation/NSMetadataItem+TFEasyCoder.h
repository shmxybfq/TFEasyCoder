//
//  NSMetadataItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMetadataItem,NSMetadataItem *);

@interface NSMetadataItem (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMetadataItem, NSMetadataItem *);
TF_EC_MINSTANCE_INT(NSMetadataItem,NSMetadataItem *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSMetadataItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSMetadataItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSMetadataItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSMetadataItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSMetadataItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSMetadataItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSMetadataItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSMetadataItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSMetadataItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSMetadataItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSMetadataItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSMetadataItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSMetadataItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSMetadataItem ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSMetadataItem);


@end