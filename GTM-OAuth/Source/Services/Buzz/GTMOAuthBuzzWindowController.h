/* Copyright (c) 2010 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTMOAuthBuzzWindowController.h
//

#include <Foundation/Foundation.h>

#if !(TARGET_OS_IPHONE)

#ifdef GTL_TARGET_NAMESPACE
  #import "GTLDefines.h"
#endif

#import "GTMOAuthWindowController.h"

@interface GTMOAuthBuzzWindowController : GTMOAuthWindowController

- (id)initWithScope:(NSString *)scope
        consumerKey:(NSString *)consumerKey
         privateKey:(NSString *)privateKey
             domain:(NSString *)domain
           language:(NSString *)language
     appServiceName:(NSString *)keychainAppServiceName
     resourceBundle:(NSBundle *)bundle;

@end

#endif // !(TARGET_OS_IPHONE)
