//
//  UIPickerView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPickerView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPickerView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPickerView, UIPickerView *);
TF_EC_MINSTANCE_IMP(UIPickerView, UIPickerView *);


TF_EC_CHAIN_PROP_IMP(UIPickerView ,id<UIPickerViewDataSource>  ,dataSource)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,id<UIPickerViewDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UIPickerView ,BOOL,showsSelectionIndicator)


@end