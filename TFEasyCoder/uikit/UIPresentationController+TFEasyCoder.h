//
//  UIPresentationController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPresentationController,UIPresentationController *);

@interface UIPresentationController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPresentationController, UIPresentationController *);
TF_EC_MINSTANCE_INT(UIPresentationController,UIPresentationController *);


TF_EC_CHAIN_PROP_INT(UIPresentationController ,id<UIAdaptivePresentationControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_INT(UIPresentationController ,UITraitCollection *,overrideTraitCollection)


@end