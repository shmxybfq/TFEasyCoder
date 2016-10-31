//
//  NSFileManager+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSFileManager,NSFileManager *);

@interface NSFileManager (TFEasyCoder)

TF_EC_MSTATIC_INT(NSFileManager, NSFileManager *);
TF_EC_MINSTANCE_INT(NSFileManager,NSFileManager *);


TF_EC_CHAIN_PROP_INT(NSFileManager ,id<NSFileManagerDelegate> ,delegate);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSFileManager ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSFileManager ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSFileManager ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSFileManager ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSFileManager ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSFileManager ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSFileManager ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSFileManager ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSFileManager ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSFileManager ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSFileManager ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSFileManager ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSFileManager ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSFileManager ,long long,accessibilityNavigationStyle)





@end