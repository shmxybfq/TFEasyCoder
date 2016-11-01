//
//  NSXMLParser+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSXMLParser,NSXMLParser *);

@interface NSXMLParser (TFEasyCoder)

TF_EC_MSTATIC_INT(NSXMLParser, NSXMLParser *);
TF_EC_MINSTANCE_INT(NSXMLParser,NSXMLParser *);


TF_EC_CHAIN_PROP_INT(NSXMLParser ,id<NSXMLParserDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(NSXMLParser ,BOOL,shouldProcessNamespaces);
TF_EC_CHAIN_PROP_INT(NSXMLParser ,BOOL,shouldReportNamespacePrefixes);
TF_EC_CHAIN_PROP_INT(NSXMLParser ,unsigned long long,externalEntityResolvingPolicy);
TF_EC_CHAIN_PROP_INT(NSXMLParser ,NSSet *,allowedExternalEntityURLs);
TF_EC_CHAIN_PROP_INT(NSXMLParser ,BOOL,shouldResolveExternalEntities);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSXMLParser ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSXMLParser ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSXMLParser ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSXMLParser ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSXMLParser ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSXMLParser ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSXMLParser ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSXMLParser ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSXMLParser ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSXMLParser ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSXMLParser ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSXMLParser ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSXMLParser ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSXMLParser ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSXMLParser);


@end