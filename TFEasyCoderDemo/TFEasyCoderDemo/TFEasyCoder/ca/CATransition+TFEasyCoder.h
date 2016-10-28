//
//  CATransition+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CATransition,CATransition *);

@interface CATransition (TFEasyCoder)

TF_EC_MSTATIC_INT(CATransition, CATransition *);
TF_EC_MINSTANCE_INT(CATransition,CATransition *);


TF_EC_CHAIN_PROP_INT(CATransition ,NSString *,type);
TF_EC_CHAIN_PROP_INT(CATransition ,NSString *,subtype);
TF_EC_CHAIN_PROP_INT(CATransition ,float,startProgress);
TF_EC_CHAIN_PROP_INT(CATransition ,float,endProgress);

@end