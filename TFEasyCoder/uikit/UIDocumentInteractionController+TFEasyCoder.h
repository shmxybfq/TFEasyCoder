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




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIDocumentInteractionController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIDocumentInteractionController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIDocumentInteractionController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIDocumentInteractionController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIDocumentInteractionController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIDocumentInteractionController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIDocumentInteractionController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIDocumentInteractionController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIDocumentInteractionController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIDocumentInteractionController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIDocumentInteractionController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIDocumentInteractionController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIDocumentInteractionController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIDocumentInteractionController ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIDocumentInteractionController);


@end