//
//  AppDelegate.h
//  pdf2Kindle
//
//  Created by Silence on 2019/2/26.
//  Copyright © 2019年 Silence. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (strong) NSOperationQueue* ops;
@property (strong) NSString* pdfUtilityPath;
@property (strong) NSString* inputFilename;
@property (strong) NSString* outputFilename;
@property (readonly) BOOL canConvert;
@property (assign) IBOutlet NSWindow *window;

@property (assign) IBOutlet NSButton *startButton;

@property (assign) IBOutlet NSImageView *fileWell;
@property (assign) IBOutlet NSTextField *fileLabel;


@property (strong) IBOutlet NSProgressIndicator* progressBar;
@property (strong) IBOutlet NSAlert* progressAlert;

- (IBAction)startConversion:(id)sender;

@end

