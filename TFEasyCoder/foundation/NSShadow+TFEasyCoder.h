//
//  NSShadow+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSShadow,NSShadow *);

@interface NSShadow (TFEasyCoder)

TF_EC_MSTATIC_INT(NSShadow, NSShadow *);
TF_EC_MINSTANCE_INT(NSShadow,NSShadow *);


TF_EC_CHAIN_PROP_INT(NSShadow ,CGSize,shadowOffset);

@end