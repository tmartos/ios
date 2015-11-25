//
//  CheckFeaturesSupported.h
//  Owncloud iOs Client
//
//  Created by Gonzalo Gonzalez on 6/11/15.
//

/*
 Copyright (C) 2015, ownCloud, Inc.
 This code is covered by the GNU Public License Version 3.
 For distribution utilizing Apple mechanisms please see https://owncloud.org/contribute/iOS-license-exception/
 You should have received a copy of this license
 along with this program. If not, see <http://www.gnu.org/licenses/gpl-3.0.en.html>.
 */

#import <Foundation/Foundation.h>

@interface CheckFeaturesSupported : NSObject

#pragma mark - Singleton

+ (id)sharedCheckFeaturesSupported;

- (void) updateServerFeaturesOfActiveUser;

@end