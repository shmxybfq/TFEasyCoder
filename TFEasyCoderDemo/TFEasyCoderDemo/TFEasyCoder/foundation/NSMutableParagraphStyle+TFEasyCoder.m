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

@end