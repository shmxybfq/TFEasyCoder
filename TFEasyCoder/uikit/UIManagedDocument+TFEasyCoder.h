//
//  UIManagedDocument+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIManagedDocument,UIManagedDocument *);

@interface UIManagedDocument (TFEasyCoder)

TF_EC_MSTATIC_INT(UIManagedDocument, UIManagedDocument *);
TF_EC_MINSTANCE_INT(UIManagedDocument,UIManagedDocument *);


TF_EC_CHAIN_PROP_INT(UIManagedDocument ,NSDictionary *,persistentStoreOptions);
TF_EC_CHAIN_PROP_INT(UIManagedDocument ,NSString *,modelConfiguration);




//superclass pros UIDocument
TF_EC_CHAIN_PROP_INT(UIManagedDocument ,NSDate *,fileModificationDate);
TF_EC_CHAIN_PROP_INT(UIManagedDocument ,NSUndoManager *,undoManager);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIManagedDocument ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIManagedDocument ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIManagedDocument ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIManagedDocument ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIManagedDocument ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIManagedDocument ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIManagedDocument ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIManagedDocument ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIManagedDocument ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIManagedDocument ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIManagedDocument ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIManagedDocument ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIManagedDocument ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIManagedDocument ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIManagedDocument);


@end