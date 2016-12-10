//
//  UIViewController+TFKit.h
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/10.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TFEasyCoderConst.h"
typedef void(^TFShowCameraCallBackBlock)(BOOL success,
                                         UIImage *image,
                                         NSData  *imageData,
                                         NSDictionary *info);

typedef void(^TFSaveToPhotosAlbumCallBackBlock)(UIImage *image,
                                                NSError *error,
                                                void * contextInfo);

@interface UIViewController (TFKit)<UIImagePickerControllerDelegate,UINavigationControllerDelegate>

@property (nonatomic,  copy)TFShowCameraCallBackBlock cameraBackBlock;
@property (nonatomic,  copy)TFSaveToPhotosAlbumCallBackBlock saveBackBlock;


/**
 *  显示照片/照相机选择照片
 *
 *  @param sourceType
 *  @param backBlock
 */

-(void)TF_CODE_PRE(showCameraSourceType):(UIImagePickerControllerSourceType)sourceType backBlock:(TFShowCameraCallBackBlock)backBlock;
/**
 *  保存图片到相册
 *
 *  @param image
 *  @param backBlock
 */
-(void)TF_CODE_PRE(imageWriteToSavedPhotosAlbum):(UIImage *)image backBlock:(TFSaveToPhotosAlbumCallBackBlock)backBlock;


@end
