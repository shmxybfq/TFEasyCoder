//
//  NSFileWrapper+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSFileWrapper,NSFileWrapper *);

@interface NSFileWrapper (TFEasyCoder)

TF_EC_MSTATIC_INT(NSFileWrapper, NSFileWrapper *);
TF_EC_MINSTANCE_INT(NSFileWrapper,NSFileWrapper *);


TF_EC_CHAIN_PROP_INT(NSFileWrapper ,NSString *,preferredFilename);
TF_EC_CHAIN_PROP_INT(NSFileWrapper ,NSString *,filename);
TF_EC_CHAIN_PROP_INT(NSFileWrapper ,NSDictionary *,fileAttributes);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSFileWrapper ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSFileWrapper ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSFileWrapper ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSFileWrapper ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSFileWrapper ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSFileWrapper ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSFileWrapper ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSFileWrapper ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSFileWrapper ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSFileWrapper ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSFileWrapper ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSFileWrapper ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSFileWrapper ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSFileWrapper ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSFileWrapper);


@end