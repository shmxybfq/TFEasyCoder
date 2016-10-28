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

@end