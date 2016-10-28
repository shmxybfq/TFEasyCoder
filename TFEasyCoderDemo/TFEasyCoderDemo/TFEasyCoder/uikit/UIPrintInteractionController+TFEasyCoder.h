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


@end