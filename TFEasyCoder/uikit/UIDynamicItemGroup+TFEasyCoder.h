//
//  UIDynamicItemGroup+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIDynamicItemGroup,UIDynamicItemGroup *);

@interface UIDynamicItemGroup (TFEasyCoder)

TF_EC_MSTATIC_INT(UIDynamicItemGroup, UIDynamicItemGroup *);
TF_EC_MINSTANCE_INT(UIDynamicItemGroup,UIDynamicItemGroup *);


TF_EC_CHAIN_PROP_INT(UIDynamicItemGroup ,CGPoint,center);
TF_EC_CHAIN_PROP_INT(UIDynamicItemGroup ,CGAffineTransform,transform)

@end