//
//  UAPPMoreSettings.h
//  uasharedtools
//
//  Created by Enea Gjoka on 2/9/16.
//
//

#import <Foundation/Foundation.h>
#import <FXForms.h>

#define UATOOLSDefaultsPrefix   @"UATOOLS_SETTING_"
#define kUAPackagesKey          @"UA_PACKAGES_KEY"

@interface UAPPMoreSettings : NSObject <FXForm>
@property (nonatomic, assign) BOOL should_show_ua_updates;
@property (nonatomic, strong) NSArray *packages;
- (instancetype)initWithTweakName:(NSString *)tweakName;

+ (NSArray *)crashReportAttachments;
+ (void)presentSupportEmailController;
+ (void)presentSupportEmailController:(NSString *)tweakName andAttachments:(NSArray *)attachments;
@end
