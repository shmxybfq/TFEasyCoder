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





//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIDocumentInteractionController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIDocumentInteractionController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIDocumentInteractionController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIDocumentInteractionController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIDocumentInteractionController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIDocumentInteractionController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIDocumentInteractionController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIDocumentInteractionController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIDocumentInteractionController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIDocumentInteractionController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIDocumentInteractionController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIDocumentInteractionController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIDocumentInteractionController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIDocumentInteractionController ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIDocumentInteractionController);


@end