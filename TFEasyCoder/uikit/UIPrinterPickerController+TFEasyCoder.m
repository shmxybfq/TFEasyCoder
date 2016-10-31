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




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIPrinterPickerController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIPrinterPickerController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIPrinterPickerController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIPrinterPickerController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIPrinterPickerController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIPrinterPickerController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIPrinterPickerController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIPrinterPickerController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIPrinterPickerController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIPrinterPickerController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIPrinterPickerController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIPrinterPickerController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIPrinterPickerController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIPrinterPickerController ,long long,accessibilityNavigationStyle)





@end