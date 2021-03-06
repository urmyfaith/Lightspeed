//
//  FileTree.h
//  Torrent1
//
//  Created by Alex Piashko on 2016-12-03.
//  Copyright © 2016 Alex Piashko. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Element.h"

@interface FileTree : NSObject
@property Element * __nullable root;

- (FileTree *__nonnull)init:(NSInputStream * __nonnull)stream;

- (NSString *__nonnull)getTitle;
- (void)fixDateFormat;
- (void)mapPieces;

@end
