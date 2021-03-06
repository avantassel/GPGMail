/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSViewController.h"

#import "WKBrowsingContextLoadDelegate.h"

@class MUIContextMenuController, MUIJSNotificationCenter, MUIWebDocumentView, MUIWebDocumentViewGroup, MUIWebFindController, NSMapTable, NSMutableArray, NSPort, NSString;

@interface MUIWKViewController : NSViewController <WKBrowsingContextLoadDelegate>
{
    BOOL _editable;
    BOOL _ignoreKVOHTMLChanges;
    MUIWebDocumentView *_webDocumentView;
    MUIWebDocumentViewGroup *_viewGroup;
    NSMapTable *_attachmentControllersByAttachment;
    MUIJSNotificationCenter *_jsNotificationCenter;
    NSMutableArray *_pendingRequests;
    MUIContextMenuController *_contextMenuController;
    MUIWebFindController *_findController;
    id _generateWebDocumentCompletionHandler;
    id _cacheDisplayInRectCompletionHandler;
    NSString *_bundleReplyMessageString;
    id <NSObject><NSSecureCoding> _bundleReplyMessageData;
    NSPort *_javascriptPort;
    NSPort *_bundleMessageReplyPort;
}

+ (id)newReplyMessageNameForMessageName:(id)arg1;
@property(readonly, nonatomic) NSPort *bundleMessageReplyPort; // @synthesize bundleMessageReplyPort=_bundleMessageReplyPort;
@property(readonly, nonatomic) NSPort *javascriptPort; // @synthesize javascriptPort=_javascriptPort;
@property(retain, nonatomic) id <NSObject><NSSecureCoding> bundleReplyMessageData; // @synthesize bundleReplyMessageData=_bundleReplyMessageData;
@property(copy, nonatomic) NSString *bundleReplyMessageString; // @synthesize bundleReplyMessageString=_bundleReplyMessageString;
@property(copy, nonatomic) id cacheDisplayInRectCompletionHandler; // @synthesize cacheDisplayInRectCompletionHandler=_cacheDisplayInRectCompletionHandler;
@property(copy, nonatomic) id generateWebDocumentCompletionHandler; // @synthesize generateWebDocumentCompletionHandler=_generateWebDocumentCompletionHandler;
@property(retain, nonatomic) MUIWebFindController *findController; // @synthesize findController=_findController;
@property(retain, nonatomic) MUIContextMenuController *contextMenuController; // @synthesize contextMenuController=_contextMenuController;
@property(nonatomic) BOOL ignoreKVOHTMLChanges; // @synthesize ignoreKVOHTMLChanges=_ignoreKVOHTMLChanges;
@property(readonly, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) MUIJSNotificationCenter *jsNotificationCenter; // @synthesize jsNotificationCenter=_jsNotificationCenter;
@property(retain, nonatomic) NSMapTable *attachmentControllersByAttachment; // @synthesize attachmentControllersByAttachment=_attachmentControllersByAttachment;
@property(retain, nonatomic) MUIWebDocumentViewGroup *viewGroup; // @synthesize viewGroup=_viewGroup;
@property(nonatomic) MUIWebDocumentView *webDocumentView; // @synthesize webDocumentView=_webDocumentView;
- (void)_didReceiveCacheDisplayData:(id)arg1;
- (void)cancelPendingCacheDisplayInRect;
- (void)cacheDisplayInRect:(struct CGRect)arg1 completionHandler:(id)arg2;
- (void)_noteFileSystemChanged:(id)arg1;
- (void)setAttachments:(id)arg1 asHidden:(BOOL)arg2 completionHandler:(id)arg3;
- (void)exportAttachmentsToiPhoto:(id)arg1;
- (BOOL)canExportAttachmentsToiPhoto:(id)arg1;
- (id)_imageAttachments;
- (void)saveAttachments:(id)arg1 toDirectory:(id)arg2 makePathsUnique:(BOOL)arg3;
- (void)_saveAttachment:(id)arg1 toDirectory:(id)arg2 filename:(id)arg3 makePathUnique:(BOOL)arg4;
- (void)saveAttachmentsWithPanel:(id)arg1;
- (void)_completeWebDocumentPasteboardType;
- (void)_didGenerateSelectionWebDocument:(id)arg1;
- (void)generateSelectionWebDocument:(id)arg1;
- (void)_didGenerateStyleInlinedWebDocument:(id)arg1;
- (void)generateStyleInlinedWebDocument:(id)arg1;
- (void)removeAttachment:(id)arg1 completionHandler:(id)arg2;
- (void)_attachmentDeleted:(id)arg1;
- (void)_documentContentChanged:(id)arg1;
- (id)_stringByRemovingCharactersInSet:(id)arg1 fromString:(id)arg2;
- (void)appendAttributedString:(id)arg1 completionHandler:(id)arg2;
- (void)appendString:(id)arg1 completionHandler:(id)arg2;
- (void)appendAttachment:(id)arg1 completionHandler:(id)arg2;
@property(nonatomic) BOOL editable;
- (BOOL)performDragOperation:(id)arg1;
- (void)_ddExternalUIRequested:(id)arg1;
- (id)sendMessageToWebProcessControllerSynchronously:(id)arg1 messageBody:(id)arg2;
- (void)sendMessageToWebProcessController:(id)arg1 messageBody:(id)arg2;
- (void)receiveMessageFromWebProcessController:(id)arg1 messageBody:(id)arg2 wkObject:(id)arg3;
- (void)_runPendingAsyncRequests;
- (void)_evaluateAsyncRequest:(id)arg1;
- (id)evaluateJavascriptSynchronously:(id)arg1;
- (void)evaluateJavascript:(id)arg1 completionHandler:(id)arg2;
- (void)_didLoadMainFrameTimeout;
- (void)_webProcessDidPaintContent:(id)arg1;
- (void)_webProcessDidLayoutContent:(id)arg1;
- (void)browsingContextControllerDidFinishLoad:(id)arg1;
- (void)_updateDebuggingPreferences;
- (void)_updateFontPreferences;
- (void)_updateImageScaling;
- (void)_reloadDocument;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
- (void)setView:(id)arg1;
- (id)view;
- (void)loadView;
- (void)tearDown;
- (void)dealloc;
- (void)_muiWKViewControllerCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

