//
//  UIPrintInteractionController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPrintInteractionController,UIPrintInteractionController *);

@interface UIPrintInteractionController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPrintInteractionController, UIPrintInteractionController *);
TF_EC_MINSTANCE_INT(UIPrintInteractionController,UIPrintInteractionController *);


TF_EC_CHAIN_PROP_INT(UIPrintInteractionController ,UIPrintInfo *,printInfo);
TF_EC_CHAIN_PROP_INT(UIPrintInteractionController ,id<UIPrintInteractionControllerDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(UIPrintInteractionController ,BOOL,showsNumberOfCopies);
TF_EC_CHAIN_PROP_INT(UIPrintInteractionController ,BOOL,showsPaperSelectionForLoadedPapers);
TF_EC_CHAIN_PROP_INT(UIPrintInteractionController ,UIPrintFormatter *,printFormatter);
TF_EC_CHAIN_PROP_INT(UIPrintInteractionController ,NSArray *,printingItems);





//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIPrintInteractionController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIPrintInteractionController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIPrintInteractionController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIPrintInteractionController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIPrintInteractionController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIPrintInteractionController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIPrintInteractionController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIPrintInteractionController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIPrintInteractionController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIPrintInteractionController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIPrintInteractionController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIPrintInteractionController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIPrintInteractionController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIPrintInteractionController ,long long,accessibilityNavigationStyle)





@end