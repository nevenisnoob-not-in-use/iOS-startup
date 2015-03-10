//
//  TodoItem.h
//  FirstSingleView
//
//  Created by huang liangjin on 2015/03/10.
//  Copyright (c) 2015年 huang liangjin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TodoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
