//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CUINamedLookup.h"

@class NSData, NSString;

@interface CUINamedData : CUINamedLookup
{
}

- (id)description;
- (id)_renditionName;
@property(readonly, copy, nonatomic) NSString *utiType;
@property(readonly, copy, nonatomic) NSData *data;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;

@end

