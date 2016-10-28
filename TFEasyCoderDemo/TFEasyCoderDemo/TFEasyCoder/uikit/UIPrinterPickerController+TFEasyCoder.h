//
//  UIPrinterPickerController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPrinterPickerController,UIPrinterPickerController *);

@interface UIPrinterPickerController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPrinterPickerController, UIPrinterPickerController *);
TF_EC_MINSTANCE_INT(UIPrinterPickerController,UIPrinterPickerController *);


TF_EC_CHAIN_PROP_INT(UIPrinterPickerController ,id<UIPrinterPickerControllerDelegate> ,delegate);

@end