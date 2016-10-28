//
//  CAAnimationGroup+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAAnimationGroup,CAAnimationGroup *);

@interface CAAnimationGroup (TFEasyCoder)

TF_EC_MSTATIC_INT(CAAnimationGroup, CAAnimationGroup *);
TF_EC_MINSTANCE_INT(CAAnimationGroup,CAAnimationGroup *);


TF_EC_CHAIN_PROP_INT(CAAnimationGroup ,NSArray *,animations);

@end