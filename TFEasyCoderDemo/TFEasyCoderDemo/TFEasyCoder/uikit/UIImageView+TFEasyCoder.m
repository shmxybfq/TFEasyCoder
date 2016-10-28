//
//  UIImageView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIImageView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIImageView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIImageView, UIImageView *);
TF_EC_MINSTANCE_IMP(UIImageView, UIImageView *);


TF_EC_CHAIN_PROP_IMP(UIImageView ,UIImage *,image)
TF_EC_CHAIN_PROP_IMP(UIImageView ,UIImage *,highlightedImage)
TF_EC_CHAIN_PROP_IMP(UIImageView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UIImageView ,BOOL,highlighted)
TF_EC_CHAIN_PROP_IMP(UIImageView ,NSArray *,animationImages)
TF_EC_CHAIN_PROP_IMP(UIImageView ,NSArray *,highlightedAnimationImages)
TF_EC_CHAIN_PROP_IMP(UIImageView ,double,animationDuration)
TF_EC_CHAIN_PROP_IMP(UIImageView ,long long,animationRepeatCount)
TF_EC_CHAIN_PROP_IMP(UIImageView ,UIColor *,tintColor)


@end