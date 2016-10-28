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


@end