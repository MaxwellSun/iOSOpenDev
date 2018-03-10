//
//  uasharedtools.h
//  uasharedtools
//
//  Created by Enea Gjoka on 2/9/15.
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UASharedTools : NSObject
+(void)applicationDidFinishLaunchingPreOrig;
+(void)applicationDidFinishLaunching;
+(void)applicationDidFinishLaunchingFirstLeg;
+(void)applicationDidFinishLaunchingLastLeg;
+(void)initializeUAClassesAndMethods;
@end

//#ifdef SLB
//
//#ifndef ___UATOOLS_SL_CHECKS__
//#define ___UATOOLS_SL_CHECKS__
//
//#if __cplusplus
//extern "C" {
//#endif
//
//    void uatools_sideloaded_check(void);
//
//#if __cplusplus
//}
//#endif
//
//#endif
//
//#endif

