//
//  UIDocumentInteractionController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIDocumentInteractionController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIDocumentInteractionController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIDocumentInteractionController, UIDocumentInteractionController *);
TF_EC_MINSTANCE_IMP(UIDocumentInteractionController, UIDocumentInteractionController *);



TF_EC_CHAIN_PROP_IMP(UIDocumentInteractionController ,id<UIDocumentInteractionControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UIDocumentInteractionController ,NSString *,UTI)
TF_EC_CHAIN_PROP_IMP(UIDocumentInteractionController ,NSString *,name)


@end