//
//  UIViewController+TFKit.m
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/10.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIViewController+TFKit.h"
#import <objc/runtime.h>
#import "NSObject+TFExecute.h"


@implementation UIViewController (TFKit)

TF_SYNTHESIZE_CATEGORY_PROPERTY_BLOCK(cameraBackBlock, setCameraBackBlock,TFShowCameraCallBackBlock);
TF_SYNTHESIZE_CATEGORY_PROPERTY_BLOCK(saveBackBlock, setSaveBackBlock,TFSaveToPhotosAlbumCallBackBlock);


/**
 *  显示照片/照相机选择照片
 *
 *  @param sourceType
 *  @param backBlock
 */
-(void)TF_CODE_PRE(showCameraSourceType):(UIImagePickerControllerSourceType)sourceType backBlock:(TFShowCameraCallBackBlock)backBlock{
    
    self.cameraBackBlock = backBlock;
    if ([UIImagePickerController isSourceTypeAvailable:sourceType]) {
        // 跳转到相机或相册页面
        UIImagePickerController *imagePickerController = [[UIImagePickerController alloc] init];
        imagePickerController.sourceType = sourceType;
        imagePickerController.delegate = self;
        imagePickerController.allowsEditing = NO;
        
        if (sourceType==UIImagePickerControllerSourceTypeCamera) {
            imagePickerController.showsCameraControls  = (sourceType==UIImagePickerControllerSourceTypeCamera);
        }
        [self presentViewController:imagePickerController animated:YES completion:^{}];
    }else{
        if (self.cameraBackBlock) {
            self.cameraBackBlock(NO,nil,nil,nil);
        }
    }
}

-(void)TF_CODE_PRE(imageWriteToSavedPhotosAlbum):(UIImage *)image backBlock:(TFSaveToPhotosAlbumCallBackBlock)backBlock{    
    self.saveBackBlock = backBlock;
    UIImageWriteToSavedPhotosAlbum(image, self, @selector(image:didFinishSavingWithError:contextInfo:), nil);
}


- (void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary *)info{
    UIImage *image = [info objectForKey:UIImagePickerControllerOriginalImage];
    NSData *imageData = [info objectForKey:UIImagePickerControllerMediaMetadata];
    if (self.cameraBackBlock) {
        self.cameraBackBlock(YES,image,imageData,info);
        [picker dismissViewControllerAnimated:YES completion:^{}];
    }
}

- (void)imagePickerControllerDidCancel:(UIImagePickerController *)picker{
    [self dismissViewControllerAnimated:YES completion:^{}];
}

/**
 *  保存照片成功后的回调
 *
 *  @param image
 *  @param error
 *  @param contextInfo
 */
- (void)image:(UIImage *)image didFinishSavingWithError:(NSError *)error contextInfo:(void *)contextInfo{
    if (self.saveBackBlock) {
        self.saveBackBlock(image,error,contextInfo);
    }
}

@end
