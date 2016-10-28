//
//  UIImageView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIImageView,UIImageView *);

@interface UIImageView (TFEasyCoder)

TF_EC_MSTATIC_INT(UIImageView, UIImageView *);
TF_EC_MINSTANCE_INT(UIImageView,UIImageView *);


TF_EC_CHAIN_PROP_INT(UIImageView ,UIImage *,image);
TF_EC_CHAIN_PROP_INT(UIImageView ,UIImage *,highlightedImage);
TF_EC_CHAIN_PROP_INT(UIImageView ,BOOL,userInteractionEnabled);
TF_EC_CHAIN_PROP_INT(UIImageView ,BOOL,highlighted);
TF_EC_CHAIN_PROP_INT(UIImageView ,NSArray *,animationImages);
TF_EC_CHAIN_PROP_INT(UIImageView ,NSArray *,highlightedAnimationImages);
TF_EC_CHAIN_PROP_INT(UIImageView ,double,animationDuration);
TF_EC_CHAIN_PROP_INT(UIImageView ,long long,animationRepeatCount);
TF_EC_CHAIN_PROP_INT(UIImageView ,UIColor *,tintColor);
TF_EC_CHAIN_PROP_INT(UIImageView ,BOOL,adjustsImageWhenAncestorFocused);
TF_EC_CHAIN_PROP_INT(UIImageView ,int,drawMode);

@end