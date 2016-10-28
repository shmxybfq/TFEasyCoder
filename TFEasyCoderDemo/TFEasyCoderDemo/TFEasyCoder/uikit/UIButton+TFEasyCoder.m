//
//  UIButton+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIButton+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIButton (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIButton, UIButton *);
TF_EC_MINSTANCE_IMP(UIButton, UIButton *);


TF_EC_CHAIN_PROP_IMP(UIButton ,UIEdgeInsets,contentEdgeInsets)
TF_EC_CHAIN_PROP_IMP(UIButton ,UIEdgeInsets,titleEdgeInsets)
TF_EC_CHAIN_PROP_IMP(UIButton ,BOOL,reversesTitleShadowWhenHighlighted)
TF_EC_CHAIN_PROP_IMP(UIButton ,UIEdgeInsets,imageEdgeInsets)
TF_EC_CHAIN_PROP_IMP(UIButton ,BOOL,adjustsImageWhenHighlighted)
TF_EC_CHAIN_PROP_IMP(UIButton ,BOOL,adjustsImageWhenDisabled)
TF_EC_CHAIN_PROP_IMP(UIButton ,BOOL,showsTouchWhenHighlighted)
TF_EC_CHAIN_PROP_IMP(UIButton ,UIColor *,tintColor)


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


TF_EC_CHAIN_PROP_IMP(UIButton ,UIFont *,font)
TF_EC_CHAIN_PROP_IMP(UIButton ,NSLineBreakMode ,lineBreakMode)
TF_EC_CHAIN_PROP_IMP(UIButton ,CGSize ,titleShadowOffset)




@end