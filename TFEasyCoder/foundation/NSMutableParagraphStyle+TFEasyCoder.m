//
//  NSMutableParagraphStyle+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMutableParagraphStyle+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSMutableParagraphStyle (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSMutableParagraphStyle, NSMutableParagraphStyle *);
TF_EC_MINSTANCE_IMP(NSMutableParagraphStyle, NSMutableParagraphStyle *);


TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,double,lineSpacing)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,double,paragraphSpacing)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,long long,alignment)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,double,firstLineHeadIndent)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,double,headIndent)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,double,tailIndent)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,long long,lineBreakMode)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,double,minimumLineHeight)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,double,maximumLineHeight)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,long long,baseWritingDirection)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,double,lineHeightMultiple)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,double,paragraphSpacingBefore)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,float,hyphenationFactor)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,NSArray *,tabStops)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,double,defaultTabInterval)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,BOOL,allowsDefaultTighteningForTruncation)




//superclass pros NSParagraphStyle
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSMutableParagraphStyle ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSMutableParagraphStyle);


@end