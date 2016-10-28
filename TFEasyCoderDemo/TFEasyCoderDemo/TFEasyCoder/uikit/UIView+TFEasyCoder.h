//
//  UIView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIView,UIView *);

@interface UIView (TFEasyCoder)

TF_EC_MSTATIC_INT(UIView, UIView *);
TF_EC_MINSTANCE_INT(UIView,UIView *);


TF_EC_CHAIN_PROP_INT(UIView ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIView ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIView ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UIView ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UIView ,UIColor *,backgroundColor)

@end