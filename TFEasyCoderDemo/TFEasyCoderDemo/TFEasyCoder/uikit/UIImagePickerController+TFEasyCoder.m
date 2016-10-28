//
//  UIImagePickerController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIImagePickerController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIImagePickerController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIImagePickerController, UIImagePickerController *);
TF_EC_MINSTANCE_IMP(UIImagePickerController, UIImagePickerController *);


TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,id ,delegate)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,long long,sourceType)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,NSArray *,mediaTypes)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,allowsEditing)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,allowsImageEditing)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,double,videoMaximumDuration)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,long long,videoQuality)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,BOOL,showsCameraControls)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,UIView *,cameraOverlayView)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,CGAffineTransform,cameraViewTransform)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,long long,cameraCaptureMode)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,long long,cameraDevice)
TF_EC_CHAIN_PROP_IMP(UIImagePickerController ,long long,cameraFlashMode)

@end