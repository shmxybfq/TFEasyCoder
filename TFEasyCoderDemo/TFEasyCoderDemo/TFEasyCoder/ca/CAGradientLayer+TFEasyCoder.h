//
//  CAGradientLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAGradientLayer,CAGradientLayer *);

@interface CAGradientLayer (TFEasyCoder)

TF_EC_MSTATIC_INT(CAGradientLayer, CAGradientLayer *);
TF_EC_MINSTANCE_INT(CAGradientLayer,CAGradientLayer *);


TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSArray *,colors);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSArray *,locations);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,CGPoint,startPoint);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,CGPoint,endPoint);
TF_EC_CHAIN_PROP_INT(CAGradientLayer ,NSString *,type);

@end