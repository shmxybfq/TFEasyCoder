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




//superclass pros UIDynamicBehavior
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIAttachmentBehavior ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIAttachmentBehavior ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIAttachmentBehavior ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIAttachmentBehavior ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIAttachmentBehavior ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIAttachmentBehavior ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIAttachmentBehavior ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIAttachmentBehavior ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIAttachmentBehavior ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIAttachmentBehavior ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIAttachmentBehavior ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIAttachmentBehavior ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIAttachmentBehavior ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIAttachmentBehavior ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIAttachmentBehavior);


@end