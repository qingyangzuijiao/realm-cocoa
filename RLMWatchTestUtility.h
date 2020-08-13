////////////////////////////////////////////////////////////////////////////
//
// Copyright 2020 Realm Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>
#import <Realm/RLMMongoCollection.h>

NS_ASSUME_NONNULL_BEGIN

/// Used to process watch change events and assert tests.
@interface RLMWatchTestUtility: NSObject <RLMChangeEventDelegate>

typedef void (^RLMWatchTestUtilityBlock)(NSError * _Nullable);

/// Sets up an object that subscribes to the RLMChangeEventDelegate
/// @param changeEventCount The target amount of change events for the test to succeed
/// @param completion Block which is invoked when target amount of change events has been hit, or an error has occured.
- (instancetype)initWithChangeEventCount:(NSUInteger)changeEventCount
                              completion:(RLMWatchTestUtilityBlock)completion;

@end
NS_ASSUME_NONNULL_END
