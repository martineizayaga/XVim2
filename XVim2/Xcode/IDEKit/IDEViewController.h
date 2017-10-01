//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DVTKit/DVTViewController.h"

#if 0
#import <IDEKit/DVTStatefulObject-Protocol.h>
#import <IDEKit/IDESelectionSource-Protocol.h>
#endif

@class DVTStateToken, IDESelection, IDEWorkspace, IDEWorkspaceDocument, IDEWorkspaceTabController, NSString;
@protocol IDEWorkspaceDocumentProvider;

@interface IDEViewController : DVTViewController // <IDESelectionSource, DVTStatefulObject>
{
    IDESelection *_outputSelection;	// 104 = 0x68
    DVTStateToken *_stateToken;	// 112 = 0x70
    id <IDEWorkspaceDocumentProvider> _workspaceDocumentProvider;	// 120 = 0x78
    IDEWorkspaceTabController *_workspaceTabController;	// 128 = 0x80
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingWorkspace;
+ (id)keyPathsForValuesAffectingWorkspaceDocument;
+ (long long)version;
// - (void).cxx_destruct;
- (void)_invalidateSubViewControllersForView:(id)arg1;
- (BOOL)_knowsAboutInstalledState;
- (void)_resolveWorkspaceDocumentProvider;
- (void)_resolveWorkspaceTabController;
@property(readonly, nonatomic) BOOL automaticallyInvalidatesChildViewControllers;
- (void)commitState;
- (void)commitStateToDictionary:(id)arg1;
@property(readonly, copy, nonatomic) IDESelection *contextMenuSelection;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(copy, nonatomic) IDESelection *outputSelection; // @synthesize outputSelection=_outputSelection;
- (void)primitiveInvalidate;
- (void)revertState;
- (void)revertStateWithDictionary:(id)arg1;
- (void)setStateToken:(id)arg1;
@property(retain, nonatomic) id <IDEWorkspaceDocumentProvider> workspaceDocumentProvider; // @synthesize workspaceDocumentProvider=_workspaceDocumentProvider;
@property(retain, nonatomic) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(readonly, nonatomic) DVTStateToken *stateToken; // @synthesize stateToken=_stateToken;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (void)viewDidInstall;
@property(readonly, nonatomic) IDEWorkspace *workspace;
@property(readonly, nonatomic) IDEWorkspaceDocument *workspaceDocument;

// Remaining properties
@property(readonly) BOOL canRevertWithEmptyStateDictionary;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

