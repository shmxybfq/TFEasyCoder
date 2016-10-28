//
//  UISlider+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UISlider,UISlider *);

@interface UISlider (TFEasyCoder)

TF_EC_MSTATIC_INT(UISlider, UISlider *);
TF_EC_MINSTANCE_INT(UISlider,UISlider *);


TF_EC_CHAIN_PROP_INT(UISlider ,float,value);
TF_EC_CHAIN_PROP_INT(UISlider ,float,minimumValue);
TF_EC_CHAIN_PROP_INT(UISlider ,float,maximumValue);
TF_EC_CHAIN_PROP_INT(UISlider ,UIImage *,minimumValueImage);
TF_EC_CHAIN_PROP_INT(UISlider ,UIImage *,maximumValueImage);
TF_EC_CHAIN_PROP_INT(UISlider ,BOOL,continuous);
TF_EC_CHAIN_PROP_INT(UISlider ,UIColor *,minimumTrackTintColor);
TF_EC_CHAIN_PROP_INT(UISlider ,UIColor *,maximumTrackTintColor);
TF_EC_CHAIN_PROP_INT(UISlider ,UIColor *,thumbTintColor);

@end