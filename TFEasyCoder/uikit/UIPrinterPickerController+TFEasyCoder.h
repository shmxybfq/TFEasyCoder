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




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIPrinterPickerController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIPrinterPickerController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIPrinterPickerController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIPrinterPickerController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIPrinterPickerController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIPrinterPickerController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIPrinterPickerController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIPrinterPickerController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIPrinterPickerController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIPrinterPickerController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIPrinterPickerController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIPrinterPickerController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIPrinterPickerController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIPrinterPickerController ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIPrinterPickerController);


@end