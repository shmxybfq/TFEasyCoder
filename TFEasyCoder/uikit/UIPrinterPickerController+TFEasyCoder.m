//
//  UIPrinterPickerController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPrinterPickerController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPrinterPickerController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPrinterPickerController, UIPrinterPickerController *);
TF_EC_MINSTANCE_IMP(UIPrinterPickerController, UIPrinterPickerController *);


TF_EC_CHAIN_PROP_IMP(UIPrinterPickerController ,id<UIPrinterPickerControllerDelegate>  ,delegate)

@end