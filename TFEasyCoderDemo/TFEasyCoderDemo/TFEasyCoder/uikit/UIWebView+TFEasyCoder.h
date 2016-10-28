//
//  UIWebView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIWebView,UIWebView *);

@interface UIWebView (TFEasyCoder)

TF_EC_MSTATIC_INT(UIWebView, UIWebView *);
TF_EC_MINSTANCE_INT(UIWebView,UIWebView *);


TF_EC_CHAIN_PROP_INT(UIWebView ,id<UIWebViewDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(UIWebView ,BOOL,scalesPageToFit);
TF_EC_CHAIN_PROP_INT(UIWebView ,BOOL,detectsPhoneNumbers);
TF_EC_CHAIN_PROP_INT(UIWebView ,unsigned long long,dataDetectorTypes);
TF_EC_CHAIN_PROP_INT(UIWebView ,BOOL,allowsInlineMediaPlayback);
TF_EC_CHAIN_PROP_INT(UIWebView ,BOOL,mediaPlaybackRequiresUserAction);
TF_EC_CHAIN_PROP_INT(UIWebView ,BOOL,mediaPlaybackAllowsAirPlay);
TF_EC_CHAIN_PROP_INT(UIWebView ,BOOL,suppressesIncrementalRendering);
TF_EC_CHAIN_PROP_INT(UIWebView ,BOOL,keyboardDisplayRequiresUserAction);
TF_EC_CHAIN_PROP_INT(UIWebView ,long long,paginationMode);
TF_EC_CHAIN_PROP_INT(UIWebView ,long long,paginationBreakingMode);
TF_EC_CHAIN_PROP_INT(UIWebView ,double,pageLength);
TF_EC_CHAIN_PROP_INT(UIWebView ,double,gapBetweenPages);
TF_EC_CHAIN_PROP_INT(UIWebView ,BOOL,allowsPictureInPictureMediaPlayback);
TF_EC_CHAIN_PROP_INT(UIWebView ,BOOL,allowsLinkPreview);

@end