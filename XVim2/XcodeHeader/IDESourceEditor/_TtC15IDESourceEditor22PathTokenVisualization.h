//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import <IDESourceEditor/SourceEditorPathTokenLayerDelegate-Protocol.h>

@class MISSING_TYPE;

@interface _TtC15IDESourceEditor22PathTokenVisualization : _TtCs12_SwiftObject <SourceEditorPathTokenLayerDelegate>
{
    MISSING_TYPE *layoutManager;
    MISSING_TYPE *dataSourceObserver;
    MISSING_TYPE *installedLayers;
    MISSING_TYPE *segmentedTokens;
    MISSING_TYPE *priority;
}

- (id)fontForMenuWithpathTokenLayer:(id)arg1;
- (void)pathTokenLayer:(id)arg1 replaceStringRepresentation:(id)arg2;
- (struct CGRect)pathTokenLayer:(id)arg1 rectFor:(long long)arg2;

@end

