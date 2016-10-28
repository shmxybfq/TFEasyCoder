//
//  UIDocumentInteractionController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIDocumentInteractionController,UIDocumentInteractionController *);

@interface UIDocumentInteractionController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIDocumentInteractionController, UIDocumentInteractionController *);
TF_EC_MINSTANCE_INT(UIDocumentInteractionController,UIDocumentInteractionController *);



TF_EC_CHAIN_PROP_INT(UIDocumentInteractionController ,id<UIDocumentInteractionControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_INT(UIDocumentInteractionController ,NSString *,UTI)
TF_EC_CHAIN_PROP_INT(UIDocumentInteractionController ,NSString *,name)

@end