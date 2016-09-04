//
//  AXUIMenu.h
//
//  Created by chao on 7/13/16.
//  Copyright © 2016 eschao. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "AXElement.h"

@interface AXUIMenu : AXElement

- (instancetype)initWithElement:(id)element;
- (NSString *)getTitle;
- (BOOL)show;
- (BOOL)pick;

@end
