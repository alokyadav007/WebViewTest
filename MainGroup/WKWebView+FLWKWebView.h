//
//  WKWebView+FLWKWebView.h
//  FLWebView
//

//

#import <WebKit/WebKit.h>
#import "FLWebViewProvider.h"

/*
 * This category extends WKWebView and conforms to the FLWebViewProvider protocol.
*/
@interface WKWebView (FLWKWebView) <FLWebViewProvider>

/*
 * Shorthand for setting WKUIDelegate and WKNavigationDelegate to the same class.
*/
- (void) setDelegateViews: (id <WKNavigationDelegate, WKUIDelegate>) delegateView;

@end
