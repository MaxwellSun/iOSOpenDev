//
//  UAGAIManager.h
//  uasharedtools
//
//  Created by Enea Gjoka on 4/4/15.
//
//

#import <Foundation/Foundation.h>

#import "UAStartupManager.h"

@interface UAGAAnalytics : NSObject

+(NSString *)tweakGAID;
+(NSString *)tweakFabricAPIKey;
+(NSString *)tweakVersion;
+(NSString *)tweakName;
+(NSString *)tweakPackageId;

+(BOOL)showTwitterMessageOnLoad;
+(NSString *)twitterHandle;
+(NSString *)twitterMessage;

+(BOOL)useFlurry;
+(NSString *)flurryKey;
+(BOOL)sideloadedPPTweak;
+(BOOL)installCustomCrashHandler;

@end

#define UAGAIManagerInstance [UAGAIManager sharedInstance]

@interface UAGAIManager : NSObject

+ (instancetype)sharedInstance;
+ (Class)flurryClass;

- (void)startAnalyticsSession;
- (void)endAnalyticsSession;

- (void)sendScreenEventWithTitle:(NSString *)title;

- (void)sendAnalyticsEventWithCategory:(NSString *)category;
- (void)sendAnalyticsEventWithCategory:(NSString *)category action:(NSString *)action;
- (void)sendAnalyticsEventWithCategory:(NSString *)category action:(NSString *)action label:(NSString *)label;
- (void)sendAnalyticsEventWithCategory:(NSString *)category action:(NSString *)action label:(NSString *)label value:(NSNumber *)value;
@end


#ifndef UAFABANSHooksHeaders_h
#define UAFABANSHooksHeaders_h

#ifdef __cplusplus
extern "C" {
#endif
    void _ua_tools_fab_answers_hooks (void);
    void _ua_tools_fab_answers_exceptions_hooks (void);
#ifdef __cplusplus
}
#endif

#endif /* UAFABANSHooksHeaders_h */
