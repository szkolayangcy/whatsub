//
//  MGDropFileView.h
//  WhatSub
//
//  Created by Marcin Grabda on 5/8/09.
//  Copyright 2010 www.burningtomato.com. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class AppController;

@interface DropFileView : NSView {
	NSArray* filenames;
}

@property (copy) NSArray* filenames;

- (void)drawCenteredAndRoundedRect;
- (void)drawCenteredText;
- (void)drawCenteredArrow;

@end