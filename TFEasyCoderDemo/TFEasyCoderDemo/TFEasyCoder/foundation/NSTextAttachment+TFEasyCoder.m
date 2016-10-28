//
//  NSTextAttachment+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSTextAttachment+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSTextAttachment (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSTextAttachment, NSTextAttachment *);
TF_EC_MINSTANCE_IMP(NSTextAttachment, NSTextAttachment *);


TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,NSData *,contents)
TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,NSString *,fileType)
TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,UIImage *,image)
TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,NSFileWrapper *,fileWrapper)

@end