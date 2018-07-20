//
//  UIViewController+TFKit.m
//  TFEasyCoderDemo
//
//  Created by ztf on 16/12/10.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIViewController+TFKit.h"
#import <objc/runtime.h>



@implementation UIViewController (TFKit)

@dynamic cameraBackBlock;
@dynamic saveBackBlock;

tf_synthesize_category_property(cameraBackBlock,
                                setCameraBackBlock,
                                OBJC_ASSOCIATION_COPY,
                                TFShowCameraCallBackBlock);
tf_synthesize_category_property(saveBackBlock,
                                setSaveBackBlock,
                                OBJC_ASSOCIATION_COPY,
                                TFSaveToPhotosAlbumCallBackBlock);

/**
 *  显示照片/照相机选择照片
 *
 *  @param sourceType
 *  @param backBlock
 */
-(void)tf_code_pre(showCameraSourceType):(UIImagePickerControllerSourceType)sourceType allowsEditing:(BOOL)allowsEditing backBlock:(TFShowCameraCallBackBlock)backBlock{
    
    self.cameraBackBlock = backBlock;
    if ([UIImagePickerController isSourceTypeAvailable:sourceType]) {
        // 跳转到相机或相册页面
        UIImagePickerController *imagePickerController = [[UIImagePickerController alloc] init];
        imagePickerController.sourceType = sourceType;
        imagePickerController.delegate = self;
        imagePickerController.allowsEditing = allowsEditing;
        
        if (sourceType==UIImagePickerControllerSourceTypeCamera) {
            imagePickerController.showsCameraControls  = (sourceType==UIImagePickerControllerSourceTypeCamera);
        }
        [self presentViewController:imagePickerController animated:YES completion:^{}];
    }else{
        if (self.cameraBackBlock) {
            self.cameraBackBlock(NO,nil,nil,nil);
            [self dismissViewControllerAnimated:YES completion:^{}];
        }
    }
}

-(void)tf_code_pre(imageWriteToSavedPhotosAlbum):(UIImage *)image backBlock:(TFSaveToPhotosAlbumCallBackBlock)backBlock{
    self.saveBackBlock = backBlock;
    UIImageWriteToSavedPhotosAlbum(image, self, @selector(image:didFinishSavingWithError:contextInfo:), nil);
}


- (void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary *)info{
    UIImage *image = [info objectForKey:UIImagePickerControllerEditedImage];
    NSData *imageData = [info objectForKey:UIImagePickerControllerMediaMetadata];
    if (self.cameraBackBlock) {
        self.cameraBackBlock(YES,image,imageData,info);
    }
    [picker dismissViewControllerAnimated:YES completion:^{}];
}

- (void)imagePickerControllerDidCancel:(UIImagePickerController *)picker{
    if (self.cameraBackBlock) {
        self.cameraBackBlock(NO,nil,nil,nil);
    }
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
