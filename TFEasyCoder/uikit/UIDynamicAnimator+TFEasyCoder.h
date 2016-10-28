//
//  UIDynamicAnimator+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIDynamicAnimator,UIDynamicAnimator *);

@interface UIDynamicAnimator (TFEasyCoder)

TF_EC_MSTATIC_INT(UIDynamicAnimator, UIDynamicAnimator *);
TF_EC_MINSTANCE_INT(UIDynamicAnimator,UIDynamicAnimator *);


TF_EC_CHAIN_PROP_INT(UIDynamicAnimator ,id<UIDynamicAnimatorDelegate> ,delegate);


@end