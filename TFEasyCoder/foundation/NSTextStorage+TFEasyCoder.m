//
//  NSTextStorage+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSTextStorage+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSTextStorage (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSTextStorage, NSTextStorage *);
TF_EC_MINSTANCE_IMP(NSTextStorage, NSTextStorage *);


TF_EC_CHAIN_PROP_IMP(NSTextStorage ,id<NSTextStorageDelegate>  ,delegate)




//superclass pros NSMutableAttributedString
//superclass pros NSAttributedString
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSTextStorage ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSTextStorage ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSTextStorage ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSTextStorage ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSTextStorage ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSTextStorage ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSTextStorage ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSTextStorage ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSTextStorage ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSTextStorage ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSTextStorage ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSTextStorage ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSTextStorage ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSTextStorage ,long long,accessibilityNavigationStyle)





@end