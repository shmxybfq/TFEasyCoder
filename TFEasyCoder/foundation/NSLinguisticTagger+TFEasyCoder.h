//
//  NSLinguisticTagger+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSLinguisticTagger,NSLinguisticTagger *);

@interface NSLinguisticTagger (TFEasyCoder)

TF_EC_MSTATIC_INT(NSLinguisticTagger, NSLinguisticTagger *);
TF_EC_MINSTANCE_INT(NSLinguisticTagger,NSLinguisticTagger *);


TF_EC_CHAIN_PROP_INT(NSLinguisticTagger ,NSString *,string);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSLinguisticTagger ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSLinguisticTagger ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSLinguisticTagger ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSLinguisticTagger ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSLinguisticTagger ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSLinguisticTagger ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSLinguisticTagger ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSLinguisticTagger ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSLinguisticTagger ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSLinguisticTagger ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSLinguisticTagger ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSLinguisticTagger ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSLinguisticTagger ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSLinguisticTagger ,long long,accessibilityNavigationStyle)





@end