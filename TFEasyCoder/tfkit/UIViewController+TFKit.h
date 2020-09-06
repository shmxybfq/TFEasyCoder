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
*  通过xib创建控制器
*/
+(instancetype)tf_code_pre(xib);

/**
 *  显示照片/照相机选择照片
 *
 *  @param sourceType
 *  @param backBlock
 */
-(void)tf_code_pre(showCameraSourceType):(UIImagePickerControllerSourceType)sourceType allowsEditing:(BOOL)allowsEditing backBlock:(TFShowCameraCallBackBlock)backBlock;

/**
 *  保存图片到相册
 *
 *  @param image
 *  @param backBlock
 */
-(void)tf_code_pre(imageWriteToSavedPhotosAlbum):(UIImage *)image backBlock:(TFSaveToPhotosAlbumCallBackBlock)backBlock;


@end
