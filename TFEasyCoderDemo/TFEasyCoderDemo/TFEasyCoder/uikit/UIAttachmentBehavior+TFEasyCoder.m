//
//  UIAttachmentBehavior+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIAttachmentBehavior+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIAttachmentBehavior (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIAttachmentBehavior, UIAttachmentBehavior *);
TF_EC_MINSTANCE_IMP(UIAttachmentBehavior, UIAttachmentBehavior *);


TF_EC_CHAIN_PROP_IMP(UIAttachmentBehavior ,CGPoint,anchorPoint)
TF_EC_CHAIN_PROP_IMP(UIAttachmentBehavior ,double,length)
TF_EC_CHAIN_PROP_IMP(UIAttachmentBehavior ,double,damping)
TF_EC_CHAIN_PROP_IMP(UIAttachmentBehavior ,double,frequency)
TF_EC_CHAIN_PROP_IMP(UIAttachmentBehavior ,double,frictionTorque)

@end