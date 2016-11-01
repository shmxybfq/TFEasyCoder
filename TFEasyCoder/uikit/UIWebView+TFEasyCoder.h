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




//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UIWebView ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIWebView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIWebView ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIWebView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIWebView ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UIWebView ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UIWebView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIWebView ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIWebView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIWebView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIWebView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIWebView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIWebView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIWebView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIWebView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIWebView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIWebView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIWebView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIWebView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIWebView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIWebView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIWebView ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIWebView);


@end
