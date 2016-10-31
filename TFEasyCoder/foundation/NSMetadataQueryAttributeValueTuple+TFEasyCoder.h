//
//  NSMetadataQueryAttributeValueTuple+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMetadataQueryAttributeValueTuple,NSMetadataQueryAttributeValueTuple *);

@interface NSMetadataQueryAttributeValueTuple (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMetadataQueryAttributeValueTuple, NSMetadataQueryAttributeValueTuple *);
TF_EC_MINSTANCE_INT(NSMetadataQueryAttributeValueTuple,NSMetadataQueryAttributeValueTuple *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSMetadataQueryAttributeValueTuple ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryAttributeValueTuple ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryAttributeValueTuple ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryAttributeValueTuple ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryAttributeValueTuple ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryAttributeValueTuple ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryAttributeValueTuple ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryAttributeValueTuple ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryAttributeValueTuple ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryAttributeValueTuple ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryAttributeValueTuple ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryAttributeValueTuple ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryAttributeValueTuple ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSMetadataQueryAttributeValueTuple ,long long,accessibilityNavigationStyle)





@end