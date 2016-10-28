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

@end