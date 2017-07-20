//
//  NSString+CompareToVersion.h
//  Stijn Mathysen
//
//  Created by Stijn Mathysen on 27/02/14.
//  Copyright (c) 2014 Stijn Mathysen. Released under the MIT license
//

#import <Foundation/Foundation.h>

@interface NSString (UATCompareToVersion)

- (NSComparisonResult)uatools_compareToVersion:(NSString *)version;

- (BOOL)uatools_isOlderThanVersion:(NSString *)version;
- (BOOL)uatools_isNewerThanVersion:(NSString *)version;
- (BOOL)uatools_isEqualToVersion:(NSString *)version;
- (BOOL)uatools_isEqualOrOlderThanVersion:(NSString *)version;
- (BOOL)uatools_isEqualOrNewerThanVersion:(NSString *)version;
- (NSString *)uatools_getMainVersionWithIntegerCount:(NSInteger)integerCount;
- (BOOL)uatools_needsToUpdateToVersion:(NSString *)newVersion mainVersionIntegerCount:(NSInteger)integerCount;

@end
