//
//  UISimpleTextPrintFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UISimpleTextPrintFormatter+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UISimpleTextPrintFormatter (TFEasyCoder)

TF_EC_MSTATIC_IMP(UISimpleTextPrintFormatter, UISimpleTextPrintFormatter *);
TF_EC_MINSTANCE_IMP(UISimpleTextPrintFormatter, UISimpleTextPrintFormatter *);


TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,NSString *,text)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,NSAttributedString *,attributedText)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,UIFont *,font)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,UIColor *,color)
TF_EC_CHAIN_PROP_IMP(UISimpleTextPrintFormatter ,long long,textAlignment)

@end