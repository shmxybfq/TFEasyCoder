//
//  UIImagePickerController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIImagePickerController,UIImagePickerController *);

@interface UIImagePickerController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIImagePickerController, UIImagePickerController *);
TF_EC_MINSTANCE_INT(UIImagePickerController,UIImagePickerController *);


TF_EC_CHAIN_PROP_INT(UIImagePickerController ,id ,delegate)
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,long long,sourceType);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,NSArray *,mediaTypes);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,allowsEditing);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,allowsImageEditing);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,double,videoMaximumDuration);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,long long,videoQuality);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,BOOL,showsCameraControls);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,UIView *,cameraOverlayView);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,CGAffineTransform,cameraViewTransform);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,long long,cameraCaptureMode);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,long long,cameraDevice);
TF_EC_CHAIN_PROP_INT(UIImagePickerController ,long long,cameraFlashMode);

@end