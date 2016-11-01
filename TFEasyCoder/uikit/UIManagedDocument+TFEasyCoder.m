//
//  UIManagedDocument+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIManagedDocument+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIManagedDocument (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIManagedDocument, UIManagedDocument *);
TF_EC_MINSTANCE_IMP(UIManagedDocument, UIManagedDocument *);


TF_EC_CHAIN_PROP_IMP(UIManagedDocument ,NSDictionary *,persistentStoreOptions)
TF_EC_CHAIN_PROP_IMP(UIManagedDocument ,NSString *,modelConfiguration)




//superclass pros UIDocument
TF_EC_CHAIN_PROP_IMP(UIManagedDocument ,NSDate *,fileModificationDate)
TF_EC_CHAIN_PROP_IMP(UIManagedDocument ,NSUndoManager *,undoManager)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIManagedDocument ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIManagedDocument ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIManagedDocument ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIManagedDocument ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIManagedDocument ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIManagedDocument ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIManagedDocument ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIManagedDocument ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIManagedDocument ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIManagedDocument ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIManagedDocument ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIManagedDocument ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIManagedDocument ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIManagedDocument ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIManagedDocument);


@end