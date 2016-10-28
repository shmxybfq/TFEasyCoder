//
//  UIButton+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIButton,UIButton *);

@interface UIButton (TFEasyCoder)

TF_EC_MSTATIC_INT(UIButton, UIButton *);
TF_EC_MINSTANCE_INT(UIButton,UIButton *);


TF_EC_CHAIN_PROP_INT(UIButton ,UIEdgeInsets,contentEdgeInsets);
TF_EC_CHAIN_PROP_INT(UIButton ,UIEdgeInsets,titleEdgeInsets);
TF_EC_CHAIN_PROP_INT(UIButton ,BOOL,reversesTitleShadowWhenHighlighted);
TF_EC_CHAIN_PROP_INT(UIButton ,UIEdgeInsets,imageEdgeInsets);
TF_EC_CHAIN_PROP_INT(UIButton ,BOOL,adjustsImageWhenHighlighted);
TF_EC_CHAIN_PROP_INT(UIButton ,BOOL,adjustsImageWhenDisabled);
TF_EC_CHAIN_PROP_INT(UIButton ,BOOL,showsTouchWhenHighlighted);
TF_EC_CHAIN_PROP_INT(UIButton ,UIColor *,tintColor);

TF_EC_CHAIN_PROP_INT(UIButton ,UIFont *,font)
TF_EC_CHAIN_PROP_INT(UIButton ,NSLineBreakMode ,lineBreakMode)
TF_EC_CHAIN_PROP_INT(UIButton ,CGSize ,titleShadowOffset)

@end