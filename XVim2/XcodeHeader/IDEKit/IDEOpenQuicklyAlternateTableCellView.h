//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEOpenQuicklyAbstractTableCellView.h>

@class NSImageView, NSTextField;

@interface IDEOpenQuicklyAlternateTableCellView : IDEOpenQuicklyAbstractTableCellView
{
    NSTextField *_titleField;
    NSImageView *_iconView;
}

@property(readonly) NSImageView *iconView; // @synthesize iconView=_iconView;
@property(readonly) NSTextField *titleField; // @synthesize titleField=_titleField;
- (void).cxx_destruct;
- (void)arrangeSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
