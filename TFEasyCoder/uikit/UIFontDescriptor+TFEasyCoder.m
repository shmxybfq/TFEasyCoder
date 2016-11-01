//
//  UIFontDescriptor+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIFontDescriptor+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIFontDescriptor (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIFontDescriptor, UIFontDescriptor *);
TF_EC_MINSTANCE_IMP(UIFontDescriptor, UIFontDescriptor *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIFontDescriptor ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIFontDescriptor ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIFontDescriptor ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIFontDescriptor ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIFontDescriptor ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIFontDescriptor ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIFontDescriptor ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIFontDescriptor ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIFontDescriptor ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIFontDescriptor ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIFontDescriptor ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIFontDescriptor ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIFontDescriptor ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIFontDescriptor ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIFontDescriptor);


@end