//
//  AppPreferencesWindowController.h
//  WhatSub
//
//  Created by Marcin Grabda on 2/8/10.
//  Copyright 2010 www.burningtomato.com. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "DBPrefsWindowController.h"

@interface AppPreferencesController : DBPrefsWindowController {
	IBOutlet NSView* generalPrefsView;
	IBOutlet NSView* accountPrefsView;
}

@end