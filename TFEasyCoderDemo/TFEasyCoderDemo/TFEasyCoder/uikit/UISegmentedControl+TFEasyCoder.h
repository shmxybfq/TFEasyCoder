//
//  UISegmentedControl+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UISegmentedControl,UISegmentedControl *);

@interface UISegmentedControl (TFEasyCoder)

TF_EC_MSTATIC_INT(UISegmentedControl, UISegmentedControl *);
TF_EC_MINSTANCE_INT(UISegmentedControl,UISegmentedControl *);


TF_EC_CHAIN_PROP_INT(UISegmentedControl ,long long,segmentedControlStyle);
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,BOOL,momentary);
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,BOOL,apportionsSegmentWidthsByContent);
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,long long,selectedSegmentIndex);
TF_EC_CHAIN_PROP_INT(UISegmentedControl ,UIColor *,tintColor);

@end