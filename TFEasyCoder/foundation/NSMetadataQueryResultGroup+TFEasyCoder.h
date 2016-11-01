//
//  NSMetadataQueryResultGroup+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMetadataQueryResultGroup,NSMetadataQueryResultGroup *);

@interface NSMetadataQueryResultGroup (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMetadataQueryResultGroup, NSMetadataQueryResultGroup *);
TF_EC_MINSTANCE_INT(NSMetadataQueryResultGroup,NSMetadataQueryResultGroup *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSMetadataQueryResultGroup ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryResultGroup ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryResultGroup ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryResultGroup ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryResultGroup ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryResultGroup ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryResultGroup ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryResultGroup ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryResultGroup ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryResultGroup ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryResultGroup ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryResultGroup ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryResultGroup ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryResultGroup ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSMetadataQueryResultGroup);


@end