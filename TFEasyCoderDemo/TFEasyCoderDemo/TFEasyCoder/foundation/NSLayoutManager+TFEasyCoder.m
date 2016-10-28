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

@end