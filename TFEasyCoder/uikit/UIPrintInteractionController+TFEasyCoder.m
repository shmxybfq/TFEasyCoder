//
//  UIPrintInteractionController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPrintInteractionController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPrintInteractionController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPrintInteractionController, UIPrintInteractionController *);
TF_EC_MINSTANCE_IMP(UIPrintInteractionController, UIPrintInteractionController *);


TF_EC_CHAIN_PROP_IMP(UIPrintInteractionController ,UIPrintInfo *,printInfo)
TF_EC_CHAIN_PROP_IMP(UIPrintInteractionController ,id<UIPrintInteractionControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UIPrintInteractionController ,BOOL,showsNumberOfCopies)
TF_EC_CHAIN_PROP_IMP(UIPrintInteractionController ,BOOL,showsPaperSelectionForLoadedPapers)
TF_EC_CHAIN_PROP_IMP(UIPrintInteractionController ,UIPrintFormatter *,printFormatter)
TF_EC_CHAIN_PROP_IMP(UIPrintInteractionController ,NSArray *,printingItems)





//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIPrintInteractionController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIPrintInteractionController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIPrintInteractionController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIPrintInteractionController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIPrintInteractionController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIPrintInteractionController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIPrintInteractionController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIPrintInteractionController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIPrintInteractionController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIPrintInteractionController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIPrintInteractionController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIPrintInteractionController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIPrintInteractionController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIPrintInteractionController ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIPrintInteractionController);


@end