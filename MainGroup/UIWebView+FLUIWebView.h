//
//  UIWebView+FLUIWebView.h
//  FLWebView
//


#import <UIKit/UIKit.h>
#import "FLWebViewProvider.h"

/*
 * This category extends UIWebView and conforms to the FLWebViewProvider protocol.
*/
@interface UIWebView (FLUIWebView) <FLWebViewProvider>

/*
 * Shorthand for setting UIWebViewDelegate to a class.
*/
- (void) setDelegateViews: (id <UIWebViewDelegate>) delegateView;

@end
