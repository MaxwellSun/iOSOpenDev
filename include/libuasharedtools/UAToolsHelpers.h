//
//  UAToolsHelpers.h
//  uasharedtools
//
//  Created by Enea Gjoka on 4/7/15.
//
//

#ifndef __UAToolsHelpers__UAMethods__
#define __UAToolsHelpers__UAMethods__

#import <Foundation/Foundation.h>

#define kIGGenericKeychainAccessGroup @"ua_generic_keychain_access_group"
#define kIGKeychainService @"com.unlimapps.bundle.id"
#define kIGKeychainAccount [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleIdentifier"] ? [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleIdentifier"] : @"ua_generic_keychain_service"

BOOL ua_tools_app_is_installed(NSString *bundle_id);
BOOL ua_beta_repo_installed (void);

@interface UAToolsHelper : NSObject
+ (NSBundle *)uaResourcesBundle;
+ (BOOL)URLContainsKnownNetwork:(NSURL *)URL;
+ (NSString *)properUserAgentStringFromUserAgentString:(NSString *)userAgent;
+ (NSDictionary *)updateGADParamsFromDict:(NSDictionary *)dict;
+ (NSDictionary *)updateRevMobParamsFromDict:(NSDictionary *)dict;
+ (NSString *)properBundleFromBundle:(NSString *)bundle;
+ (NSString *)properBundleFromBundle:(NSString *)bundle overwrite:(BOOL)overwrite;
+ (NSString *)properNameFromName:(NSString *)name;
+ (NSString *)localizedStringForKey:(NSString *)string;
+ (NSDictionary *)amaParamsFromDict:(NSDictionary *)dict;
+ (void)modifyMMRequest:(NSMutableURLRequest *)request;

#pragma mark -- keychain access
+ (NSString *)uaToolsAppAccessGroup;
+ (void)resetKeychain;
+ (void)resetUserDefaults;
+ (NSURL *)sharedAppURLWithOriginalResult:(NSURL *)r identifier:(NSString *)identifier ;

#pragma mark -- Fabric Helpers
+ (NSString *)bundleIdentifierForAnswers:(NSString *)originalBundleIdentifier;
+ (NSString *)bundleVersionForAnswers:(NSString *)originalBundleVersion;
+ (NSString *)appDisplayVersionForAnswers:(NSString *)originalAppDisplayVersion;

+ (BOOL)loadClassNamed:(NSString *)className;
+ (BOOL)loadClassesNamed:(NSArray *)classNames;

+ (BOOL)allHooksFunctional;

#pragma mark -- Info Dictionary
+ (NSMutableDictionary *)enhancedInfoDictionary:(NSDictionary *)originalDictionary;
@end

#pragma mark -- Catagories
@interface UIImage ()
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
@end

@interface UIImage (UAToolsResources)
+(UIImage *)ua_tools_imageNamed:(NSString *)name;
@end

#define UAToolsLocalizedString(string) [UAToolsHelper localizedStringForKey:(string)]

@interface NSObject (UANSCopying)
- (id)unlimappsDeepCopy;
@end

@interface UAToolsKeychainHooks : NSObject
+ (void)addKeychainHooksIfNeeded;
@end

@interface UAToolsKeychainHooks (SSKeyChain)
+ (void)addSSKeychainHooks;
@end

#endif
