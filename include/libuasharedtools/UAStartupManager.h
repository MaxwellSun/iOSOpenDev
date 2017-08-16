//
//  UAStartupManager.h
//  uasharedtools
//
//  Created by Enea Gjoka on 2/20/16.
//
//

#import <Foundation/Foundation.h>

@class PLCrashReporter;

@interface UAStartupManager : NSObject
+ (void)startCrashManagerIfNeeded;
+ (BOOL)shouldLoadHooks;
+ (void)resetNumberOfCrashes;
+ (void)addExceptionHandlers;
+ (NSData *)crashReportTextFileFromData:(NSData *)data;
+ (NSString *)existingCrashReportPath;
+ (NSString *)existingLiveCrashReportPath;
+ (PLCrashReporter *)sharedCrashReporter;
+ (void)removeExceptionHandlers;
+ (void)startJBEngineIfNeeded;
+ (void)addAppropriateHooks;
@end
