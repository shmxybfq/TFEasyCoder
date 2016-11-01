//
//  NSTextContainer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSTextContainer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSTextContainer (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSTextContainer, NSTextContainer *);
TF_EC_MINSTANCE_IMP(NSTextContainer, NSTextContainer *);


TF_EC_CHAIN_PROP_IMP(NSTextContainer ,NSLayoutManager *,layoutManager)
TF_EC_CHAIN_PROP_IMP(NSTextContainer ,CGSize,size)
TF_EC_CHAIN_PROP_IMP(NSTextContainer ,NSArray *,exclusionPaths)
TF_EC_CHAIN_PROP_IMP(NSTextContainer ,long long,lineBreakMode)
TF_EC_CHAIN_PROP_IMP(NSTextContainer ,double,lineFragmentPadding)
TF_EC_CHAIN_PROP_IMP(NSTextContainer ,unsigned long long,maximumNumberOfLines)
TF_EC_CHAIN_PROP_IMP(NSTextContainer ,BOOL,widthTracksTextView)
TF_EC_CHAIN_PROP_IMP(NSTextContainer ,BOOL,heightTracksTextView)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSTextContainer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSTextContainer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSTextContainer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSTextContainer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSTextContainer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSTextContainer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSTextContainer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSTextContainer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSTextContainer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSTextContainer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSTextContainer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSTextContainer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSTextContainer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSTextContainer ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSTextContainer);


@end