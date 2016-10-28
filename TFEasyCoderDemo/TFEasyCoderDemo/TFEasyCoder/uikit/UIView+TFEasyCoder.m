//
//  UIView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIView, UIView *);
TF_EC_MINSTANCE_IMP(UIView, UIView *);


TF_EC_CHAIN_PROP_IMP(UIView ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UIView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UIView ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UIView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UIView ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UIView ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UIView ,UIColor *,backgroundColor)
@end