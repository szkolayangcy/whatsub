//
//  AppUtil.h
//  WhatSub
//
//  Created by Marcin Grabda on 5/4/11.
//  Copyright 2011 Marcin Grabda. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface AppPreferences : NSObject {
@private
}

+ (NSArray*)typeExtensionsForName:(NSString*)typeName;
+ (NSString*)getNPUsername;
+ (NSString*)getNPPassword;
+ (NSString*)getNPLanguageCode;
+ (NSString*)getOutputFormat;
+ (NSStringEncoding)getOutputEncoding;
+ (NSNumber*)getDefaultFrameRate;
+ (BOOL)isSRTOnlyConversionAllowed;
+ (BOOL)isClosingAppAfterProcessingEnabled;
+ (BOOL)isArchivingIfFileExistsEnabled;

@end
