//
//  NSLayoutManager+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSLayoutManager+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSLayoutManager (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSLayoutManager, NSLayoutManager *);
TF_EC_MINSTANCE_IMP(NSLayoutManager, NSLayoutManager *);


TF_EC_CHAIN_PROP_IMP(NSLayoutManager ,NSTextStorage *,textStorage)
TF_EC_CHAIN_PROP_IMP(NSLayoutManager ,id<NSLayoutManagerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(NSLayoutManager ,BOOL,showsInvisibleCharacters)
TF_EC_CHAIN_PROP_IMP(NSLayoutManager ,BOOL,showsControlCharacters)
TF_EC_CHAIN_PROP_IMP(NSLayoutManager ,double,hyphenationFactor)
TF_EC_CHAIN_PROP_IMP(NSLayoutManager ,BOOL,usesFontLeading)
TF_EC_CHAIN_PROP_IMP(NSLayoutManager ,BOOL,allowsNonContiguousLayout)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSLayoutManager ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSLayoutManager ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSLayoutManager ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSLayoutManager ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSLayoutManager ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSLayoutManager ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSLayoutManager ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSLayoutManager ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSLayoutManager ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSLayoutManager ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSLayoutManager ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSLayoutManager ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSLayoutManager ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSLayoutManager ,long long,accessibilityNavigationStyle)





@end